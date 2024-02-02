#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: pointer to the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tilt;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	tilt = tree->left;
	tree->left = tilt->right;
	if (tilt->right != NULL)
	{
		tilt->right->parent = tree;
	}
	tilt->right = tree;
	tilt->parent = tree->parent;
	tree->parent = tilt;
	return (tilt);
}
