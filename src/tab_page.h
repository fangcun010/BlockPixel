#ifndef _BP_TAB_PAGE_H_
#define BP_TAB_PAGE_H_

#define BP_MAX_TAB_TITLE_LENGTH                 64

typedef void (*tab_page_update_func_t)(void*);

typedef struct bp_tab_page_descriptor {
    char title[BP_MAX_TAB_TITLE_LENGTH];
    void* parameter;
    tab_page_update_func_t func;
} bp_tab_page_descriptor_t;


#endif