#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure balance factor
 *
 * Description: Measures the balance factor of a binary tree.
 * The balance factor is calculated as the difference between the height
 * of the left subtree and the height of the right subtree.
 * If the tree is NULL, returns 0.
 *
 * Return: Balance factor of the binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height - right_height);
}
