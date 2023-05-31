#include "binary_trees.h"

/**
 * binary_tree_insert_left - the left-child of another node
 * @parent: the parent node
 * @value: the value to be inserted in the left child
 *
 * Return: pointer to the left node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);
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
