#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count leaves
 *
 * Description: Counts the number of leaves (nodes with no children) in a binary tree.
 * If the tree is NULL, returns 0.
 *
 * Return: Number of leaves in the binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    // If both left and right children are NULL, it's a leaf
    if (tree->left == NULL && tree->right == NULL)
        return 1;

    // Recursively count leaves in the left and right subtrees
    size_t left_leaves = binary_tree_leaves(tree->left);
    size_t right_leaves = binary_tree_leaves(tree->right);

    // Return the sum of leaves in both subtrees
    return left_leaves + right_leaves;
}
