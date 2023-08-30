#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree recursively
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: Traverse the binary tree using in-order traversal
 * and applies the provided function to each node's value.
 * If the tree or func in NULL, do nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);

	func(tree->n);

	binary_tree_inorder(tree->right, func);
}
