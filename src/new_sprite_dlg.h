#ifndef _NEW_SPRITE_DLG_H_
#define _NEW_SPRITE_DLG_H_

#define CIMGUI_DEFINE_ENUMS_AND_STRUCTS
#include <cimgui.h>

typedef struct bp_new_sprite_dlg_result {
    unsigned int width, height;
} bp_new_sprite_dlg_result_t;

typedef void (*bp_new_sprite_dlg_callback_t)(void*);

extern ImGuiID bp_new_sprite_dlg_id();
extern void bp_new_sprite_dlg_open();
extern void bp_new_sprite_dlg_update();

#endif