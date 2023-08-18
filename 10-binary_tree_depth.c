#include "binary_trees.h"
/**
 * binary_tree_depth - measures the de[th of a node in a binary tree
 *
 * @tree: pointer to root node of tree to measure depth
 * Return: depth of tree or 0 if NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
		depth = 1 + binary_tree_depth(tree->parent);

	return (depth);
}
