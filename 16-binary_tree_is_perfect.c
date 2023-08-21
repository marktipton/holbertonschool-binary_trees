#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "14-binary_tree_balance.c"
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: pointer to root node of tree
 * Return: 1 if perfect or 0 if NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree) % 2 == 0)
		return (0);
	if (binary_tree_balance(tree) == 0)
		return (1);

	return (0);
}

