#include "binary_trees.h"

/**
 * is_full - checks if a binary tree is full recursively
 * @tree: a binary tree
 *
 * Return: 0 not full 1 otherwise
 */
int is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(!tree->left && tree->right) ||
			is_full(tree->left) == 0 ||
			is_full(tree->right) == 0)
			return (0);
	}
	return (1);
}
/**
 * binary_tree_is_full - checksif a binary tree is full
 *
 * @tree: pointer to a binary tree
 * Return: Null if tree is empty
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_full(tree));
}

