#include <ncurses.h>

#ifndef VIEWS_H
#define VIEWS_H

#endif // VIEWS_H

// window to preview files (as a side pane)
WINDOW preview_view();

// window to show fs
WINDOW fs_view_window();

// window to temporarily become the main window obstructing all other windows
WINDOW file_view_window();

// settings window. this will overlap all other windows
void settings_view();

// this will show bookmarks view as a small overlapping window
void bookmarks_view();

// will show most visited locations
void most_visited_view();
