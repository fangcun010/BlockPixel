#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

void bp_task_bar_update() {
    bool open;

    ImVec2 pos;

    pos.x = igGetMainViewport()->WorkPos.x;
    pos.y = igGetMainViewport()->WorkPos.y;

    igSetWindowPos_Str("task_bar", pos, ImGuiCond_Always);
    igBegin("task_bar", &open, ImGuiWindowFlags_NoDecoration);
    igEnd();
}
