#ifndef ROPE_H
#define ROPE_H

#define ROPE_MAX_LEN 8

typedef struct RopeNode RopeNode;

typedef struct RopeNode
{
    RopeNode* parent;
    int size;
    char text[ROPE_MAX_LEN+1];
    RopeNode* left;
    RopeNode* right;

} RopeNode;

RopeNode* init_rope_node(RopeNode* parent, int size, char* text);

int is_root(RopeNode* node);

int is_branch(RopeNode* node);

int is_leaf(RopeNode* node);

#endif
