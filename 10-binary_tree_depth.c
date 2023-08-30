#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree
 *
 * @tree: Pointer to the node to measure the depth
 *
 * Description: Measures the depth of a given node in a binary tree.
 * If the node is NULL, returns 0.
 *
 * Return: Depth of the node in the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return 0;

	// Traverse from the node towards the root while counting the steps
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return depth;
}
