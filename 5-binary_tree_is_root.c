#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: the node to check
 *
 * Return: 1 if node is a root, 0 otherwise or if node is NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	if (node->left != NULL && node->right != NULL && node->parent == NULL)
		return (1);
	return (0);
}