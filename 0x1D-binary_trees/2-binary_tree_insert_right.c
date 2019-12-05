#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert nodes to right of binary parent.
 * @parent: parent node.
 * @value: value of new node.
 * Return: a new node inserted to the right.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *search;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->left = NULL;
	new->right = NULL;
	search = parent;
	while (search)
	{
		if (!search->right)
		{
			new->parent = search;
			search->right = new;
			new->n = value;
			return (new);
		}
		if (search->right->n > value)
		{
			new->parent = search;
			new->right = search->right;
			search->right->parent = new;
			search->right = new;
			new->n = value;
			return (new);
		}
		search = search->right;
	}
	return (new);
}
