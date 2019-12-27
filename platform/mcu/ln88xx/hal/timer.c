#include "aos/hal/timer.h"
#include "hal/hal_timer.h"
#include <k_api.h>
#include <aos/kernel.h>
#include "ln88xx.h"

typedef struct {
    klist_t                     node;
    timer_config_t              config;
    uint32_t                    remained;
} ln_aos_timer_t;
typedef struct {
    klist_t     timer_list[TIMER_4];
} ln_aos_timer_ctrl_t;
ln_aos_timer_ctrl_t     g_ln_aos_timer_ctrl = {0};

static ln_aos_timer_ctrl_t *ln_aos_timer_ctrl_get_handle(void)
{
    return &g_ln_aos_timer_ctrl;
}
void TIMER_IRQHandler()
{
    ln_aos_timer_ctrl_t *ln_aos_timer_ctrl = ln_aos_timer_ctrl_get_handle();
    klist_t     *head = NULL, *iter;
    ln_aos_timer_t *item = NULL;
    TIMER_Index i;
    
    for(i = TIMER_1; i <= TIMER_4; i++){
        if (HAL_TIMER_Int_Status(i)) {
            head = &ln_aos_timer_ctrl->timer_list[i - 1];
            iter = head->next;
            while (iter != head && iter != NULL) {
                item = krhino_list_entry(iter, ln_aos_timer_t, node);
                item->remained--;
                if(item->remained == 0){
                    if(item->config.cb){
                        item->config.cb(item->config.arg);
                    }
                    if(item->config.reload_mode == TIMER_RELOAD_MANU){
                        klist_rm(&item->node);
                        aos_free(item);
                    }else{
                        item->remained = item->config.period;
                    }
                }
                iter = iter->next;
            }
            // clear interrupt.
            HAL_TIMER_Int_Clr(i);
        }
    }
}

/**
 * @brief init a hardware timer
 * @param tmr timer struct
 * @param period micro seconds for repeat timer trigger
 * @param auto_reoad set to 0, if you just need oneshot timer
 * @param cb callback to be triggered after useconds
 * @ch    timer channel
 * @param arg passed to cb
 * @note  period   auto   auto   auto
 *         *-------|--------|--------|--------|
 */
int32_t hal_timer_init(timer_dev_t *tmr)
{
    TIMER_InitTypeDef config = {0};
    ln_aos_timer_ctrl_t *ln_aos_timer_ctrl = ln_aos_timer_ctrl_get_handle();
    klist_t     *head = NULL;
    ln_aos_timer_t *item = NULL;
    
    if(tmr->port >= TIMER_4){
        return -1;
    }
    head = &ln_aos_timer_ctrl->timer_list[tmr->port];
    config.index = (TIMER_Index)(tmr->port + 1);
    config.mask = TIMER_MASKED_NO;
    if(tmr->config.reload_mode == TIMER_RELOAD_AUTO){
        config.mode = TIMER_MODE_USERDEFINED;
    } else {
        config.mode = TIMER_MODE_FREERUNNING;
    }
    config.user_freq = 1000 * 1000;
    
    item = aos_malloc(sizeof(ln_aos_timer_t));
    memcpy(&item->config, &tmr->config, sizeof(timer_config_t));
    item->remained = tmr->config.period;
    if(head->next == NULL){
        klist_init(head);
    }
    klist_add(head, &item->node);
    
    HAL_TIMER_Init(config);
    HAL_TIMER_LoadCount_Set(config.index, config.user_freq/1000);
#if 0
	HAL_Status status = HAL_ERROR;
	TIMER_InitParam param = {0};
	TIMER_ID timer_id;

	if (tmr->port == TIMER0_ID) {
		timer_id = TIMER0_ID;
	} else if (tmr->port == TIMER0_ID) {
		timer_id = TIMER1_ID;
	} else {
		printf("[timer]: init error, wrong port %d\n", tmr->port);
		return;
	}
	param.arg = tmr->config.arg;
	param.callback = tmr->config.cb;
	param.cfg = HAL_TIMER_MakeInitCfg(TIMER_MODE_REPEAT,
				TIMER_CLK_SRC_HFCLK, TIMER_CLK_PRESCALER_4);
	param.isEnableIRQ = 1;
	param.period = 6000 * tmr->config.period; //each cycle is 6us

	status = HAL_TIMER_Init(timer_id, &param);
	if (status != HAL_OK) {
		printf("timer int error %d\n", status);
	}
#endif
}

/**
 * @brief init a hardware timer
 * @param None
 * @retval 0 == success
 *         EIO == failure
 */
int32_t hal_timer_start(timer_dev_t *tmr)
{
    HAL_TIMER_Enable((TIMER_Index)(tmr->port + 1), TIMER_ENABLE);
    NVIC_EnableIRQ(TIMER_IRQn);
	return 0;
}

/**
 * @brief stop a hardware timer
 * @param tmr timer struct
 * @param cb callback to be triggered after useconds
 * @param arg passed to cb
 */
void hal_timer_stop(timer_dev_t *tmr)
{
    HAL_TIMER_Enable((TIMER_Index)(tmr->port + 1), TIMER_DISABLE);
}
