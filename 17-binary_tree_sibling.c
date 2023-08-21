#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: pointer to root node of tree
 * Return: pointer to sibling node or 0 if NULL or parent null
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || parent == NULL)
		return (NULL);

	if (parent->left == node)
	{
		return (parent->right);
	}
	else if (parent->right == node)
	{
		return (parent->left);
	}
	else
	{
		return (NULL);
	}
}
