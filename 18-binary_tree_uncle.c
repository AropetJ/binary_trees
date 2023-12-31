#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 *
 * Description: Finds the uncle of a given node in a binary tree.
 * If the node is NULL, has no parent, or the parent has no
 * sibling, returns NULL.
 *
 * Return: Pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - Find the sibling of a node
 *
 * @node: Pointer to the node to find the sibling
 *
 * Description: Finds the sibling of a given node in a binary tree.
 * If the node is NULL, the parent is NULL, or the node has no
 * sibling, returns NULL.
 *
 * Return: Pointer to the sibling node.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
