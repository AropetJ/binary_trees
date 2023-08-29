#include <stdlib.h>
#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return; // Do nothing if tree or func is NULL

    // Call the function on the current node's value
    func(tree->n);

    // Traverse the left subtree
    binary_tree_preorder(tree->left, func);

    // Traverse the right subtree
    binary_tree_preorder(tree->right, func);
}
