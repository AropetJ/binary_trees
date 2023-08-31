#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 *
 * Description: Counts the number of nodes in a binary tree.
 * If the tree is NULL, returns 0.
 *
 * Return: Number of nodes in the binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
}

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

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
