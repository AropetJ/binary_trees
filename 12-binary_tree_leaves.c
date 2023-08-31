#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count leaves
 *
 * Description: Counts the number of leaves (nodes with no
 * children) in a binary tree. If the tree is NULL, returns 0.
 *
 * Return: Number of leaves in the binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
