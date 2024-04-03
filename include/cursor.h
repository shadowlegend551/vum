#ifndef CURSOR_H
#define CURSOR_H


typedef struct Cursor
{
    int xpos;
    int ypos;

} Cursor;

void set_cursor_pos(Cursor* cursor, int x, int y);

void move_cursor(Cursor* cursor, int x, int y);

#endif
