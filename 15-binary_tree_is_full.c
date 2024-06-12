#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree
 * is full.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if tree or subtree is not full
 * 1 if tree or subtree is full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == LEAF && tree->right == LEAF)
	{
		return (1);
	}

	if (tree->left != LEAF && tree->right != LEAF)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}

