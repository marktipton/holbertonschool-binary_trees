#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves on a binary tree
 *
 * @tree: pointer to root node of tree to count leaves
 * Return: number of leaves on tree or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int count_left = 0;
	int count_right = 0;
	int count = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);
	count_left = binary_tree_leaves(tree->left);
	count_right = binary_tree_leaves(tree->right);

	count = count_left + count_right;
	return (count);
}
