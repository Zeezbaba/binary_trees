#include "binary_trees.h"

/**
 * binary_tree_is_full - checksif a binary tree is full
 *
 * @tree: pointer to a binary tree
 * Return: Null if tree is empty
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (1);
	if ((tree->left && !tree->right) || (!tree->left && (tree->right)))
		return (0);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}

