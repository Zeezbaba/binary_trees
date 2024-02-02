#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: A binary tree to be checked
 *
 * Return: 1 - if b_tree is perfect and  otherwise
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left_height, right_height;

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	if (right_height == left_height)
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	return (0);
}

/**
 * tree_height - checks the height of a binary tree
 * @tree: the height of a tree
 *
 * Return: height of the tree
 */
int tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return 0;
	int left_height, right_height;

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height);
}

