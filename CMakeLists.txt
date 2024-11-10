# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("PlantsFighting")

set(CMAKE_CXX_STANDARD 11)

set(LIBPATH ${PROJECT_SOURCE_DIR}/lib)
set(EXECPATH ${PROJECT_SOURCE_DIR}/bin)

set(ESAYXPATH ${PROJECT_SOURCE_DIR}/ThirdPart) 
set(ESAYXLIB ${PROJECT_SOURCE_DIR}/ThirdPart/EsayX/lib)

set(ANIMATION animation)

set(APPNAME PlantsFighting)
# 包含子项目。
add_subdirectory ("PlantsFighting")
add_subdirectory ("Animation")
