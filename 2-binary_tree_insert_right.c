#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child
 *
 * @parent: pointer to parent node to create
 * @value: value to put in new node
 *
 * Return: pointer to new node or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node = NULL;
	binary_tree_t *temp = NULL;

	if (parent == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = parent->right;
		right_node = binary_tree_node(parent, value);
		right_node->right = temp;
		temp->parent = right_node;
	}
	else
	{
		right_node = binary_tree_node(parent, value);
	}
	if (right_node == NULL)
		return (NULL);
	parent->right = right_node;
	return (right_node);

}

