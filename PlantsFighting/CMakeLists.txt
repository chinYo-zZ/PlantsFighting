# CMakeList.txt: PlantsFighting 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。

cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE SOURCES "src/*.cpp") #查找源文件src目录下

include_directories(${PROJECT_SOURCE_DIR}/Animation/include)

link_directories(${LIBPATH} ${ESAYXLIB})
link_libraries(${ANIMATION} EasyXa EasyXw)
set(EXECUTABLE_OUTPUT_PATH ${EXECPATH})

# 将源代码添加到此项目的可执行文件。
add_executable (${APPNAME} ${SOURCES})

target_include_directories(${APPNAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


