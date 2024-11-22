#include <stdio.h>
#include <stdlib.h>  // Include this to avoid the implicit declaration error for 'free'
#include "bst.h"

int main() {
    t_btree *node = bstree_create_node(4);
    if (node) {
        printf("Node created with item: %d\n", node->item);
        free(node);  // Now it's properly declared
    } else {
        printf("Failed to create node\n");
    }
    return 0;
}
