// src/bst.h
#ifndef BST_H
#define BST_H

typedef struct s_btree {
    int item;
    struct s_btree *left;
    struct s_btree *right;
} t_btree;

t_btree *bstree_create_node(int item);

#endif
