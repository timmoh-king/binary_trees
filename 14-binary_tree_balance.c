#include "binary_trees.h"
/**
 * max - returns the maximum value
 * @x: the first value
 * @y: the second value
 *
 * Return: the max value
 */
int max(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	binary_tree_t *leftTree, *rightTree;

	if (tree == NULL)
		return (0);

	leftTree = tree->left;

	rightTree = tree->right;


	if (abs(leftTree - rightTree) <= 1 && binary_tree_balance(leftTree)
			&& binary_tree_balance(rightTree))
		return (1);

	return (0);
}
