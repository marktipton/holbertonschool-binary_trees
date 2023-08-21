#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 *
 * @tree: pointer to root node of tree
 * Return: balance factor of tree or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;
	int balance = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		l_height = binary_tree_height(tree->left);
	if (tree->right)
		r_height = binary_tree_height(tree->right);

	balance = l_height - r_height;

	return (balance);
}
