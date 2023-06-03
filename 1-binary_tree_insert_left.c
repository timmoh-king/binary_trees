#include "binary_trees.h"

/**
 * binary_tree_insert_left - the left-child of another node
 * @parent: the parent node
 * @value: the value to be inserted in the left child
 *
 * Return: pointer to the left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
