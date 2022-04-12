cmake_minimum_required(VERSION 3.23)

add_executable(blockpixel application.c)

target_include_directories(blockpixel SYSTEM PRIVATE ${BP_THIRD_PARTY}/cimgui)
target_include_directories(blockpixel SYSTEM PRIVATE ${BP_THIRD_PARTY}/cimgui/generator/output)

target_include_directories(blockpixel SYSTEM PRIVATE ${BP_THIRD_PARTY}/SDL/include)

set(IMGUI_SOURCES 
    ${BP_THIRD_PARTY}/cimgui/imgui/imgui.cpp 
    ${BP_THIRD_PARTY}/cimgui/imgui/imgui_draw.cpp 
    ${BP_THIRD_PARTY}/cimgui/imgui/imgui_demo.cpp 
    ${BP_THIRD_PARTY}/cimgui/imgui/imgui_widgets.cpp
    ${BP_THIRD_PARTY}/cimgui/imgui/imgui_tables.cpp
)

if (WIN32)
    add_definitions("-DIMGUI_IMPL_API=extern \"C\" __declspec\(dllexport\)")
else(WIN32)
    add_definitions("-DIMGUI_IMPL_API=extern \"C\" ")
endif(WIN32)
add_compile_definitions("IMGUI_IMPL_OPENGL_LOADER_GL3W")

add_library(cimgui_sdl_opengl ${BP_THIRD_PARTY}/cimgui/cimgui.cpp
    ${BP_THIRD_PARTY}/cimgui/imgui/backends/imgui_impl_sdl.cpp
    ${BP_THIRD_PARTY}/cimgui/imgui/backends/imgui_impl_opengl3.cpp
    ${IMGUI_SOURCES})

target_include_directories(cimgui_sdl_opengl SYSTEM PRIVATE ${BP_THIRD_PARTY}/cimgui/imgui)

target_include_directories(cimgui_sdl_opengl SYSTEM PRIVATE ${BP_THIRD_PARTY}/SDL/include)

target_link_libraries(blockpixel cimgui_sdl_opengl SDL2 opengl32)

set_target_properties(blockpixel PROPERTIES VS_DEBUGGER_ENVIRONMENT "PATH=%PATH%;$<TARGET_FILE_DIR:cimgui>;$<TARGET_FILE_DIR:SDL2>")