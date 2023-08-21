#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to root node of tree
 * Return: pointer to sibling node or 0 if NULL or parent null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *node_parent = node->parent;
	binary_tree_t *sibling = NULL;

	if (node == NULL || node_parent == NULL)
		return (NULL);

	if ((node_parent->n) > (node->n))
	{
		if (node_parent->right == NULL)
			return (NULL);
		sibling = node_parent->right;
		return (sibling);
	}
	if (node_parent->left == NULL)
		return (NULL);
	sibling = node_parent->left;
	return (sibling);
}
