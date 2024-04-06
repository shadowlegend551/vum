#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/rope.h"

RopeNode* init_rope_node(RopeNode* parent, int size, char* text)
{
    RopeNode* node = malloc(sizeof(RopeNode));
    if(!node || size > ROPE_NODE_MAX_LEN)
    {
        free(node); return NULL;
    }

    node->parent = parent;
    node->size = size;

    for(int i = 0; i < size; i++)
    { 
        node->text[i] = *text;
        text++;
    }
    node->text[size] = '\0';

    node->left = NULL;
    node->right = NULL;

    return node;
}


int is_root(RopeNode* node)
{
    return !(node->parent) ? 1 : 0;
}


int is_branch(RopeNode* node)
{
    return node->left || node->right ? 1 : 0;
}


int is_leaf(RopeNode* node)
{
    return !(node->left && node->right) ? 1 : 0;
}

