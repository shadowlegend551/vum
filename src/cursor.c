#include <stdio.h>

#include "../include/cursor.h"


void set_cursor_pos(Cursor* cursor, int x, int y)
{
    printf("\33[%d;%dH", y, x);
    printf("I'm here!");

    cursor->xpos = x;
    cursor->ypos = y;

}


void move_cursor(Cursor* cursor, int x, int y)
{
    cursor->xpos += x;
    cursor->ypos += y;

    printf("\33[%d;%dH", cursor->ypos, cursor->xpos);
    printf("I'm here!");
}

