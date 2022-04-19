#include <string.h>

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

#define STB_DS_IMPLEMENTATION
#define STBDS_NO_SHORT_NAMES
#include <stb_ds.h>

#include "tab_page.h"
#include "home_tab_page.h"
#include "editor_tab_page.h"

static bp_tab_page_descriptor_t* s_tab_pages=NULL;

void bp_workspace_init() {
    bp_tab_page_descriptor_t home_page_descriptor;

    strcpy(home_page_descriptor.title, "Home");
    home_page_descriptor.func = bp_home_tab_page_update;
    stbds_arrpush(s_tab_pages, home_page_descriptor);

    bp_tab_page_descriptor_t editor_page_descriptor;
    
    strcpy(editor_page_descriptor.title, "Editor");
    editor_page_descriptor.func = bp_editor_tab_page_update;
    stbds_arrpush(s_tab_pages, editor_page_descriptor);
}

void bp_test() {
    
}

void bp_workspace_update() {
    bp_test();
/*    bool t;
    
    ImVec2 pos;
    pos.x = igGetMainViewport()->WorkPos.x;
    pos.y = igGetMainViewport()->WorkPos.y;
    ImVec2 size;
    size.x = igGetMainViewport()->WorkSize.x;
    size.y = igGetMainViewport()->WorkSize.y-32;
     
    igSetWindowPos_Str("workspace", pos, ImGuiCond_Appearing);
    igSetWindowSize_Str("workspace", size, ImGuiCond_Appearing);
    igBegin("workspace", &t,ImGuiWindowFlags_NoDecoration);
    
    igBeginTabBar("tab_bar", ImGuiTabBarFlags_None);
    int tab_page_count = stbds_arrlen(s_tab_pages);

    bool open;
    for (int i = 0; i < tab_page_count; i++) {
        
        bp_tab_page_descriptor_t* tab_page = &s_tab_pages[i];
        if (igBeginTabItem(tab_page->title, &open, ImGuiTabItemFlags_None)) {
            tab_page->func(tab_page->parameter);
            igEndTabItem();
        }
    }

    igEndTabBar();

    igEnd();
    */
}
