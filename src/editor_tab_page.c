#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

void bp_editor_tab_page_update(void* parameter) {
    ImVec2 size;

    size.x = 200;
    size.y = 0;
    
    ImVec2 border_size;

    border_size.x = 0;
    border_size.y = 0;

    if (igBeginTable("editor", 2, ImGuiTableFlags_Resizable, border_size,0)) {
        igTableNextRow(ImGuiTableRowFlags_None, 0);
        igTableSetColumnIndex(0);
        igText("dfdfdfd");
        igTableSetColumnIndex(1);
        ImVec2 outer_size;
        outer_size.x = 0;
        outer_size.y = 0;
        if (igBeginTable("right", 1,  ImGuiTableFlags_Resizable,outer_size , 0)) {
            igTableNextRow(ImGuiTableRowFlags_None, 30);
            igTableSetColumnIndex(0);
            igText("100");
            igTableNextRow(ImGuiTableRowFlags_None, 30);
            igTableSetColumnIndex(0);
            igText("200");

            igEndTable();
        }
        igEndTable();
    }
}