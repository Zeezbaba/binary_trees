#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: node of a binary tree
 * Return: pointer to sibling if sibling, node NULL otherwise
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

