#ifndef WINDOWS_H
#define WINDOWS_H

// store state/data of window state somewhere in some memory (in cache prolly idk)
void save_window_state();

// load window state from wherever it was saved to (savelocation is file atm)
void revive_window_state();

// parent container window to display all views & has an event listener
void MainWindow();

// the child window in which all the
void FileBrowserWindow();


// window to show file mgr settings
void SettingsWindow();

#endif // WINDOWS_H
