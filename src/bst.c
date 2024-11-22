#include "bst.h"
#include <stdlib.h>  // For malloc
#include <stddef.h>  // For NULL

t_btree *bstree_create_node(int item) {
    t_btree *new_node = malloc(sizeof(t_btree));  // Allocating memory for the new node
    if (!new_node) return NULL;  // Check if malloc failed and return NULL
    new_node->item = item;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}
