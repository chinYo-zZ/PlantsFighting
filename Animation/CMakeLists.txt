cmake_minimum_required (VERSION 3.8)

file(GLOB_RECURSE SOURCES "src/*.cpp") #查找源文件src目录下


include_directories(${ESAYXPATH})
set(LIBRARY_OUTPUT_PATH ${LIBPATH})

add_library(${ANIMATION} STATIC ${SOURCES})

target_include_directories(${ANIMATION} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

