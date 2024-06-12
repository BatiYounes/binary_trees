#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height
 * of a binary tree.
 * @tree:  pointer to the root node of the tree
 * to measure the height.
 *
 * Return: the height of the tree starting from the root.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t tree_left_h = 0, tree_right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	tree_left_h = binary_tree_height(tree->left);
	tree_right_h = binary_tree_height(tree->right);

	if (tree_left_h > tree_right_h)
	{
		return (tree_left_h + 1);
	}

	return (tree_right_h + 1);
}

