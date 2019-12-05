#include "binary_trees.h"
/**
 * binary_tree_height - height of binary tree.
 * @tree: binary tree.
 * Return: height of binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
	{
		if (!tree->left)
			return (left);
		return (left + 1);
	}
	else if (right > left)
	{
		if (!tree->right)
			return (right);
		return (right + 1);
	}
	return (0);
}
