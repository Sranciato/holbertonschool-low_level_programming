#include "binary_trees.h"
/**
 * binary_tree_node - Return a newly malloced node for tree
 * @parent: parent node.
 * @value: value of each node.
 * Return: binary tree node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
