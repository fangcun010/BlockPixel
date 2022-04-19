#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

#include <stdio.h>

#include "main_menu.h"
#include "workspace.h"
#include "status_bar.h"

void bp_main_window_init() {
    bp_main_menu_init();
    bp_workspace_init();
}

void bp_main_window_update() {
    bp_main_menu_update();
   // bp_task_bar_update();
    bp_workspace_update();
    bp_status_bar_update();
}