#include "binary_trees.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 *
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node's value
 *
 * Description: Performs level-order traversal of a binary tree.
 * The function calls the provided function for each node's value in the tree.
 * If tree or func is NULL, the function does nothing.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **queue = NULL;
	size_t front = 0, rear = 0, size = 0;

	if (tree == NULL || func == NULL)
		return;

	queue = malloc(sizeof(binary_tree_t *) * 1024);
	if (queue == NULL)
		return;

	queue[rear++] = (binary_tree_t *)tree;
	size++;

	while (size > 0)
	{
		binary_tree_t *current = queue[front++];

		func(current->n);

		if (current->left != NULL)
		{
			queue[rear++] = current->left;
			size++;
		}

		if (current->right != NULL)
		{
			queue[rear++] = current->right;
			size++;
		}

		size--;
	}

	free(queue);
}
