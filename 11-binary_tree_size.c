#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of binary tree
 *
 * Return: size of binary tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);

	if (tree->left)
		size++;
	if (tree->right)
		size++;
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (size);
}

