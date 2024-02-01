#include "binary_trees.h"

int tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to a binary tree
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int bal_factor = 0, left_height = 0, right_height = 0;

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	bal_factor = left_height - right_height;
	return (bal_factor);
}

/**
 * tree_height - calculates the height of a tree
 * @tree: A binary tree
 *
 * Return: height of tree or 0 if tree is NULL
 */
int tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	int left_height, right_height;

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
