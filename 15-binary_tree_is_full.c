#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Check if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Description: Checks if a binary tree is full, which means that every node in
 * the tree has either zero or two children. If the tree is NULL, returns 0.
 *
 * Return: 1 if the binary tree is full, 0 otherwise.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
