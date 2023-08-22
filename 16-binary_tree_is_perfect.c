#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
/**
 * _pow - finds x to the power y
 *@x: number
 *@y: power
 * Return: -1 on failure, power
 */
size_t _pow(size_t x, size_t y)
{
if (y > 0)
{
	return (x * _pow(x, y - 1));
}
if (y == 0)
{
	return (1);
}

return (-1);
}
/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 *
 * @tree: pointer to root node of tree
 * Return: 1 if perfect or 0 if NULL or not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t size = 0;
	size_t exp = 0;


	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree) + 1;
	size = binary_tree_size(tree);
	exp = height - 1;

	if (size == _pow(2, exp))
		return (1);
	return (0);
}

