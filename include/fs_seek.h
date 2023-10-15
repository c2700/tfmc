#include <stddef.h>
#include <stdio.h>

#ifndef FS_SEEK_H
#define FS_SEEK_H

// struct of file/dir properties
struct f_props {
    size_t f_size;
    char* content;
    char* name;
    char* f_type;
    int inode;
};

// same as "ls  <dir_name>"
void ls_dir();

// preview contents of a file
void preview_file();

#endif // FS_SEEK_H
