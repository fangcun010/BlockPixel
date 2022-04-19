#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

static ImGuiID s_dlg_id = 0;

ImGuiID bp_new_sprite_dlg_id() {
    return s_dlg_id;
}

void bp_new_sprite_dlg_callback() {

}

void bp_new_sprite_dlg_open() {
    igOpenPopup_ID(bp_new_sprite_dlg_id(), ImGuiPopupFlags_None);
}

void bp_new_sprite_dlg_update() {
    ImVec2 pos;
    bool open;
    pos.x = 100;
    pos.y = 100;
    //   igSetWindowPos_Str("model", pos, ImGuiCond_Always);

    if (s_dlg_id == 0) {
        s_dlg_id = igGetID_Str("New Sprite##new sprite");
    }

    if (igBeginPopupModal("New Sprite##new sprite", &open, ImGuiWindowFlags_None)) {
        igText("Size");
        int val=0;
        igInputInt("Width", &val, 1, 10, ImGuiInputTextFlags_None);
        igInputInt("Height", &val, 1, 10, ImGuiInputTextFlags_None);
        igSeparator();
        igText("Color Mode");
        igSeparator();
        ImVec2 size = { 0,0 };
        igButton("Yes", size);
        igSameLine(0, 10);
        igButton("No", size);
        
        igEndPopup();
    }
}