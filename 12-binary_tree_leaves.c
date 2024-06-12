#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count
 * the number of leaves.
 *
 * Return: number of leaves in a binary tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_tree_leaves = 0, right_tree_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != LEAF)
	{
		left_tree_leaves = binary_tree_leaves(tree->left);
	}

	if (tree->right != LEAF)
	{
		right_tree_leaves = binary_tree_leaves(tree->right);
	}

	if (tree->left == LEAF && tree->right == LEAF)
	{
		return (left_tree_leaves + right_tree_leaves + 1);
	}

	return (left_tree_leaves + right_tree_leaves);
}

