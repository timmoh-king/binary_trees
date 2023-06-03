#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the pointer to the node to check
 *
 * Return: 1 on Success 0 on failure
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	else
	{
	if ((node->left != NULL && node->right != NULL) ||
			(node->left != NULL || node->right != NULL))
		return (1);
	return (0);
	}
}
