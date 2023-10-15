#ifndef F_MGR_MODE_H
#define F_MGR_MODE_H

enum MODES {
    BROWSE = 0,
    VISUAL = 1
};

// Set the mode in which the file manager must be in
void Set_mode();

// set visual mode in file manager
void visual_mode();

// set browsing mode in file manager
void browse_mode();

#endif // F_MGR_MODE_H
