cmake_minimum_required(VERSION 3.23)

project(BlockPixel)

add_subdirectory(3rd/SDL)
add_subdirectory(3rd/cimgui)

set(BP_THIRD_PARTY ${CMAKE_CURRENT_SOURCE_DIR}/3rd)

add_subdirectory(src)
