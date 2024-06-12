#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size
 * of a binary tree.
 * @tree: pointer to the root node of the tree
 * to measure the size.
 *
 * Return: the size of the tree, or NULL if it's not a tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_tree_size = 0, right_tree_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != LEAF)
	{
		left_tree_size = binary_tree_size(tree->left);
	}

	if (tree->right != LEAF)
	{
		right_tree_size = binary_tree_size(tree->right);
	}

	return (left_tree_size + right_tree_size + 1);
}

