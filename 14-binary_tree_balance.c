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

	return (tree_height(tree->left) - tree_height(tree->right));
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
	size_t left_height, right_height;

	left_height = tree->left ? 1 + tree_height(tree->left) : 1;
	right_height = tree->right ? 1 + tree_height(tree->right) : 1;

	return ((left_height > right_height) ? left_height : right_height);
}

