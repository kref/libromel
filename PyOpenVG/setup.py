#encoding=utf-8

from distutils.core import setup, Extension
import glob, os.path


VGsrcList = ["pyOpenVG.c", "VGConsts.c", "VGFuncs.c"]
VGUsrcList = ["pyVGU.c", "VGUConsts.c", "VGUFuncs.c"]


setup(
name = 'PyOpenVG',
version = '1.0.1',
description = 'Python binding for the ShivaVG implementation of the OpenVG API',
license = 'GPL v3',
ext_modules = [
                Extension('OpenVG.VG',
                    VGsrcList, \
                    libraries=['OpenVG', 'GL', 'GLU'],
                    extra_compile_args=["-O3", "-ffast-math", "-fomit-frame-pointer", "-funroll-loops"]
                ),
		Extension('OpenVG.VGU',
                    VGUsrcList, \
                    libraries=['OpenVG', 'GL', 'GLU'],
                    extra_compile_args=["-O3", "-ffast-math", "-fomit-frame-pointer", "-funroll-loops"]
                )
              ],
packages = ["OpenVG"],
package_dir = {"OpenVG":"OpenVG"}
)
