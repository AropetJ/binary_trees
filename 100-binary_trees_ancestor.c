#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 *
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Description: Finds the lowest common ancestor of two given nodes
 * in a binary tree. If no common ancestor is found, returns NULL.
 *
 * Return: Pointer to the lowest common ancestor node.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (first == NULL || second == NULL)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}

	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}

	while (first != second && first != NULL && second != NULL)
	{
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}

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
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
