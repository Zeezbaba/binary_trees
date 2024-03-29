#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tilt;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	tilt = tree->right;
	tree->right = tilt->left;
	if (tilt->left != NULL)
	{
		tilt->left->parent = tree;
	}
	tilt->left = tree;
	tilt->parent = tree->parent;
	tree->parent = tilt;
	return (tilt);
}
