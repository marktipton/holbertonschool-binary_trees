#include "binary_trees.h"
#include "11-binary_tree_size.c"
#include "12-binary_tree_leaves.c"
/**
 * binary_tree_nodes - counts the parent nodes in binary tree
 *
 * @tree: pointer to root node of tree
 * Return: number of nodes with child on tree or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;
	size_t leaves = 0;
	size_t parents = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);
	parents = size - leaves;

	return (parents);
}
