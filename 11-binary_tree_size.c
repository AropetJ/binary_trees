#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 *
 * Description: Measures the size (number of nodes) of a binary tree.
 * If the tree is NULL, returns 0.
 *
 * Return: Size of the binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_size = binary_tree_size(tree->left);
	size_t right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
