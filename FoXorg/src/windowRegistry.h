#ifndef FOXUI_WINREG_H
#define FOXUI_WINREG_H

#include <X11/Xlib.h>

typedef struct {
    foxWidget *widget;
    void *data;
} winData;

typedef struct _winReg {
    winData win;
    struct _winReg *left;
    struct _winReg *right;
} winRegistry;


#endif
