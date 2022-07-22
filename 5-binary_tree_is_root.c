#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a binary tree is a root node
 * @node: Pointer to some tree node
 *
 * Return: 1 if the node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	return (0);
}
