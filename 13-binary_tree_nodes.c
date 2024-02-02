#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast1 child in a binary tree
 *
 * @tree: pointer to a binary tree DS
 * Return: 0 if tree is NULL and num of nodes if tree has them
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t num_nodes;

	num_nodes = 0;
	num_nodes += (tree->left || tree->right) ? 1 : 0;
	num_nodes += binary_tree_nodes(tree->left);
	num_nodes += binary_tree_nodes(tree->right);

	return (num_nodes);
}

