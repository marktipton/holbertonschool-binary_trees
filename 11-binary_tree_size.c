#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to root node of tree to measure size
 * Return: size of tree or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	int size_left = 0;
	int size_right = 0;
	int size;

	if (tree == NULL)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);

	size = 1 + size_left + size_right;

	return (size);
}
