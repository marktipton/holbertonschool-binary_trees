#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts node as left-child
 *
 * @parent: pointer to parent node to create
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		temp = parent->left;
		left_node = binary_tree_node(parent, value);
		left_node->left = temp;
		temp->parent = left_node;
	}
	else
	{
		left_node = binary_tree_node(parent, value);
	}
	if (left_node == NULL)
		return (NULL);
	parent->left = left_node;
	return (left_node);
}

