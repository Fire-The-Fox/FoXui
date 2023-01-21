#ifndef FOXUI_WIDGET_H
#define FOXUI_WIDGET_H

typedef struct {
    unsigned int width, height;
    Display *dpy;
    int screen;
    Window root;
    Drawable drawable;
    GC gc;
} foxWidget;

#endif
