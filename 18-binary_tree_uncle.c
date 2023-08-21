#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - finds the uncle/aunt of a node
 *
 * @node: pointer to root node of tree
 * Return: pointer to uncle node or NULL if NULL or no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || !(node->parent) || !(node->parent->parent))
		return (NULL);
	parent = node->parent;

	return (binary_tree_sibling(parent));
}
