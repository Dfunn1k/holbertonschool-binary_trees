#include "binary_trees.h"

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;
	tmp = parent;

	tmp = malloc(sizeof(binary_tree_t));
	if (tmp == NULL)
		return NULL;

	tmp->n = value;
	tmp->parent = NULL;
	tmp->left = NULL;
	tmp->right = NULL;

	return (tmp);
}
