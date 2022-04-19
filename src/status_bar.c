#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

void bp_status_bar_update() {
    int status_bar_h = 32;
    ImVec2 pos;
    ImVec2 size;
    bool open;

    pos.x = igGetMainViewport()->WorkPos.x;
    pos.y = igGetMainViewport()->WorkPos.y+igGetMainViewport()->WorkSize.y - status_bar_h;

    size.x = igGetMainViewport()->WorkSize.x;
    size.y = status_bar_h;

    igSetWindowPos_Str("status_bar", pos, ImGuiCond_Always);
    igSetWindowSize_Str("status_bar", size, ImGuiCond_Always);
    igBegin("status_bar",&open,ImGuiWindowFlags_NoDecoration);
    igText("Hello World!");
    igEnd();
}