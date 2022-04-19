#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

#include "main_menu.h"

#include "new_sprite_dlg.h"

static ImGuiID s_new_sprite_dlg_id=0;

void bp_main_menu_file_menu_update() {
    
    if (igBeginMenu("File", true)) {
        if (igMenuItem_Bool("New...", NULL, false, true)) {
            bp_new_sprite_dlg_open();
        }
        if (igMenuItem_Bool("Open...", NULL, false, true)) {
            
        }
        igSeparator();
        if (igMenuItem_Bool("Exit", NULL, false, true)) {

        }
        igEndMenu();
    }
}

void bp_main_menu_edit_menu_update() {
    if (igBeginMenu("Edit", true)) {
        igEndMenu();
    }
}

void bp_main_menu_sprite_menu_update() {
    if (igBeginMenu("Sprite", true)) {
        igEndMenu();
    }
}

void bp_main_menu_layer_menu_update() {
    if (igBeginMenu("Layer", true)) {
        igEndMenu();
    }
}

void bp_main_menu_frame_menu_update() {
    if (igBeginMenu("Frame", true)) {
        igEndMenu();
    }
}

void bp_main_menu_view_menu_update() {
    if (igBeginMenu("View", true)) {
        igEndMenu();
    }
}

void bp_main_menu_help_menu_update() {
    if (igBeginMenu("Help", true)) {
        

        igEndMenu();
    }
}

void bp_main_menu_init() {
}

void bp_main_menu_update(){
    if (igBeginMainMenuBar()) {
        bp_main_menu_file_menu_update();
        bp_main_menu_edit_menu_update();
        bp_main_menu_sprite_menu_update();
        bp_main_menu_layer_menu_update();
        bp_main_menu_frame_menu_update();
        bp_main_menu_view_menu_update();
        bp_main_menu_help_menu_update();

        igEndMainMenuBar();
    }

    bp_new_sprite_dlg_update();
}