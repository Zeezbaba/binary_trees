#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leaf_height = 0;
	size_t root_height = 0;

	if (!tree)
		return (0);

	leaf_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	root_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (leaf_height > root_height ? leaf_height : root_height);
}
