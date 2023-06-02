#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of the tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: size of tree or null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
