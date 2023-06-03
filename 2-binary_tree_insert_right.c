#include "binary_trees.h"

/**
 * binary_tree_insert_right - the right-child of another node
 * @parent: the parent node
 * @value: the value to be inserted in the left child
 *
 * Return: pointer to the left node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
