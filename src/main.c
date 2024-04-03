#include <stdio.h>

#include "../include/cursor.h"


int main()
{
    Cursor cursor;
    cursor.xpos = 0;
    cursor.ypos = 0;
    set_cursor_pos(&cursor, 0, 0);
    move_cursor(&cursor, 20, 20);

    return 0;
}

