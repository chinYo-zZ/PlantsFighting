# CMakeList.txt: PlantsFighting 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。

cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE SOURCES "src/*.cpp") #查找源文件src目录下

# 将源代码添加到此项目的可执行文件。
add_executable (PlantsFighting ${SOURCES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PlantsFighting PROPERTY CXX_STANDARD 20)
endif()


target_include_directories(PlantsFighting PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include) #头文件

set(EASYX_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/ThirdPart/EsayX/include)
set(EASYX_LIB_DIR ${PROJECT_SOURCE_DIR}/ThirdPart/EsayX/lib)

target_include_directories(PlantsFighting PRIVATE ${EASYX_INCLUDE_DIR})

target_link_directories(PlantsFighting PRIVATE ${EASYX_LIB_DIR})

# 链接 EasyX 库
target_link_libraries(PlantsFighting PRIVATE EasyXa EasyXw)
# TODO: 如有需要，请添加测试并安装目标。
