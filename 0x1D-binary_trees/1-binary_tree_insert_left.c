#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node to left child of parent.
 * @parent: parent node.
 * @value: value of new node.
 * Return: new node inserted to the left child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
		if (!search->left)
		{
			new->parent = search;
			search->left = new;
			new->n = value;
			return (new);
		}
		if (search->left->n < value)
		{
			new->parent = search;
			new->left = search->left;
			search->left->parent = new;
			search->left = new;
			new->n = value;
			return (new);
		}
		search = search->left;
	}
	return (new);
}
