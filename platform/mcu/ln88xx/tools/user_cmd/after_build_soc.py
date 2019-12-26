# -*- coding: utf-8 -*-#

import re
import os
import sys
import time

class PostBuildConfig:
    rootDir = None
    currentDir = None
    project = None
    axfFile = None
    chip_family = None

    cmd = None
    output = None
    release = None
    crp_enable = None
    app_version = None
    hw_version = None
    boot_version = None
    force_ymodem = None
    def __init__(self, chip_family, cmd, project, output, release, crp_enable, app_version, hw_version, boot_version, force_ymodem):
        self.chip_family = chip_family
        self.cmd = cmd
        self.project = project
        self.output = output
        self.release = release#int(release, base=10)
        self.crp_enable = crp_enable
        self.app_version = app_version
        self.hw_version = hw_version
        self.currentDir = os.getcwd()
        self.boot_version = boot_version
        self.force_ymodem = force_ymodem
        if self.currentDir != None:
            end = self.currentDir.rfind('project')
            if end == -1:
                # only for drivertest project.
                end = self.currentDir.find('test')
            self.rootDir = self.currentDir[:end]
        if self.currentDir != None and self.project != None:
            self.axfFile = self.currentDir + "\\Objects\\" + self.project + r".axf"

class PostBuildProcess(object):
    buildConfig = None

    def __init__(self, buildConfig):
        self.buildConfig = buildConfig

    def generateAsmFile(self):
        if buildConfig.axfFile == None:
            print("axfFile is None and return")
            return
        print("Generate asm file")
        os.system("fromelf -c -v -a --output=" + buildConfig.currentDir + "\\" + buildConfig.project + r".asm " + buildConfig.axfFile)
        print("Asm done")

    def generateBinaryFile(self):
        if buildConfig.axfFile == None:
            print("axfFile is None and return")
            return
        print("Generate bin file")
        os.system("fromelf --bin --output=" + buildConfig.project + ".bin " + buildConfig.axfFile)
        now_time = time.localtime()
        time_string = "{yyyy}-{MM:02d}-{DD:02d} {hh:02d}:{mm:02d}:{ss:02d}".format(yyyy=now_time.tm_year,
                                                                                   MM=now_time.tm_mon,
                                                                                   DD=now_time.tm_mday,
                                                                                   hh=now_time.tm_hour,
                                                                                   mm=now_time.tm_min,
                                                                                   ss=now_time.tm_sec)
        print("----------" * 6)
        print("\t\t\tbin done @ {t}".format(t=time_string))
        print("----------" * 6)

    def makeImage(self):
        if buildConfig.cmd == r"flashimage":
            str = buildConfig.rootDir + r"platform\mcu\ln88xx\tools\bin\mkimage.exe " + buildConfig.chip_family.lower() + r" " + buildConfig.cmd + r" " + buildConfig.rootDir + r"platform\mcu\ln88xx\lib\boot_ram_" + buildConfig.chip_family.lower() + r".bin" + r" " + buildConfig.currentDir + "\\" + buildConfig.project + r".bin" + r" " + buildConfig.currentDir + "\\" +  buildConfig.output + r" release=" + buildConfig.release + r" crp_enable=" + buildConfig.crp_enable + r" app_version=" + buildConfig.app_version + r" hw_version=" + buildConfig.hw_version
        elif buildConfig.cmd == r"otaimage":
            str = buildConfig.rootDir + r"platform\mcu\ln88xx\tools\bin\mkimage.exe " + buildConfig.chip_family.lower() + r" " + buildConfig.currentDir + "\\" + buildConfig.project + r".bin" + r" " + buildConfig.currentDir + "\\" + buildConfig.output + r" release=" + buildConfig.release + r" app_version=" + buildConfig.app_version + r" hw_version=" + buildConfig.hw_version
        elif buildConfig.cmd == r"bootram":
            str = buildConfig.rootDir + r"platform\mcu\ln88xx\tools\bin\mkimage.exe " + buildConfig.chip_family.lower() + r" " + buildConfig.cmd + r" " + buildConfig.currentDir + "\\" + buildConfig.project + r".bin" + r" crp_enable=" + buildConfig.crp_enable + r" version=" + buildConfig.boot_version + r" force_ymodem=" + buildConfig.force_ymodem
        else:
            print("Args invalid and return")
            return
        print(str)
        os.system(str)

    def doFPUPatch(self):
        str = buildConfig.rootDir + r"platform\mcu\ln88xx\tools\bin\fpu_patch.exe " + buildConfig.currentDir + "\\" + buildConfig.project + r".asm " + buildConfig.currentDir + "\\" +  buildConfig.output
        os.system(str)


if __name__ == '__main__':
    argc = len(sys.argv)
    release = None
    crp_enable = None
    app_version = None
    hw_version = None
    boot_version = None
    force_ymodem = None

    # chip_family
    str = sys.argv[1]
    chip_family = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

    # command
    str = sys.argv[2]
    cmd = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

    # project name
    str = sys.argv[3]
    project = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

    # output
    str = sys.argv[4]
    output = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

    if cmd == "flashimage":
        # release
        if argc > 5:
            str = sys.argv[5]
        else:
            str = None
        if str != None and str != "":
            release = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # crp_enable
        if argc > 6:
            str = sys.argv[6]
        else:
            str = None
        if str != None and str != "":
            crp_enable = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # app_version
        if argc > 7:
            str = sys.argv[7]
        else:
            str = None
        if str != None and str != "":
            app_version = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # hw_version
        if argc > 8:
            str = sys.argv[8]
        else:
            str = None
        if str != None and str != "":
            hw_version = re.findall(re.compile(r"(?<==).*", re.S), str)[0]
    elif cmd == "otaimage":
        # release
        if argc > 5:
            str = sys.argv[5]
        else:
            str = None
        if str != None and str != "":
            release = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # app_version
        if argc > 6:
            str = sys.argv[6]
        else:
            str = None
        if str != None and str != "":
            app_version = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # hw_version
        if argc > 7:
            str = sys.argv[7]
        else:
            str = None
        if str != None and str != "":
            hw_version = re.findall(re.compile(r"(?<==).*", re.S), str)[0]
    elif cmd == "bootram":
        if project != output[:output.rfind(".")]:
            print("When cmd = bootram, project(%s) must equal to output(%s)!" % (project, output))
            print("Exit!")
            exit(-1)
        # crp_enable
        if argc > 5:
            str = sys.argv[5]
        else:
            str = None
        if str != None and str != "":
            crp_enable = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # boot_version
        if argc > 6:
            str = sys.argv[6]
        else:
            str = None
        if str != None and str != "":
            boot_version = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

        # force_ymodem
        if argc > 7:
            str = sys.argv[7]
        else:
            str = None
        if str != None and str != "":
            force_ymodem = re.findall(re.compile(r"(?<==).*", re.S), str)[0]

    buildConfig = PostBuildConfig(chip_family, cmd, project, output, release, crp_enable, app_version, hw_version, boot_version, force_ymodem)

    postBuild = PostBuildProcess(buildConfig)
    postBuild.generateAsmFile()
    postBuild.generateBinaryFile()
    postBuild.makeImage()
    if buildConfig.chip_family == r"LN882x" and (buildConfig.cmd == "flashimage" or buildConfig.cmd == "otaimage"):
        postBuild.doFPUPatch()
