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
	binary_tree_t **line = NULL;
	size_t front = 0, rear = 0, size = 0;

	if (tree == NULL || func == NULL)
		return;

	line = malloc(sizeof(binary_tree_t *) * 1024);
	if (line == NULL)
		return;

	line[rear++] = (binary_tree_t *)tree;
	size++;

	while (size > 0)
	{
		binary_tree_t *current = line[front++];

		func(current->n);

		if (current->left != NULL)
		{
			line[rear++] = current->left;
			size++;
		}

		if (current->right != NULL)
		{
			line[rear++] = current->right;
			size++;
		}

		size--;
	}

	free(line);
}
