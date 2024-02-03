#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level);
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: A binary tree to be checked
 *
 * Return: 1 - if b_tree is perfect and  otherwise
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

/**
 * is_leaf - checks whether anode is a leaf
 * @node: node to be checked
 * Return: 1 if node is leaf  otherwise
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - returns depth of a tree
 * @tree: pointer to b_tree
 * Return: depth of a node
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - returns leaf of a b_tree
 * @tree: opintre to  b_tree
 * Return: pointer to first leaf found
*/
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * isperfect_recursive - checks whether a tree is perfect recursively
 * @tree: pointer to a b_tree
 * @leaf_depth: depth of one leaf in the binary_tree
 * @level: level of ccurrent node
 * Return: 1 if tree is perfect, 0 otherwise
*/
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}
