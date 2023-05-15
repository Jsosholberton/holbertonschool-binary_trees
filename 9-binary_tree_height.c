#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * If tree is NULL, your function must return 0
 *
 * Return: the height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->left && tree->right)
		return (2);
	if (tree->left || tree->right)
		return (1);
	return (0);
}
