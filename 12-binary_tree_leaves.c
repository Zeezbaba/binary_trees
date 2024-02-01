#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to binary tree
 *
 * Return: 0 if tree is NULL and num of leaves if not NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return 0;
	size_t num_leaves = 0;
	if (tree && !tree->left && !tree->right)
		return 1;
	num_leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return num_leaves;
}