#include <stdio.h>

#include "../include/cursor.h"
#include "../include/rope.h"


int main()
{
    RopeNode* node = init_rope_node(NULL, 5, "hello");

    printf("PARENT_ADDRESS: %d\n", (int)node->parent);
    printf("IS_ROOT: %d\n", is_root(node));
    printf("IS_BRANCH: %d\n", is_branch(node));
    printf("IS_LEAF: %d\n", is_leaf(node));
    printf("LENGTH: %d\n", node->size);
    printf("TEXT: '%s'\n", node->text);

    /*Cursor cursor;
    cursor.xpos = 0;
    cursor.ypos = 0;
    set_cursor_pos(&cursor, 0, 0);
    move_cursor(&cursor, 20, 20);
*/
    return 0;
}

