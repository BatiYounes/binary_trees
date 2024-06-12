#include "binary_trees.h"

int _height(const binary_tree_t *tree);

/**
 * binary_tree_balance - Function that measures the balance factor
 * of a binary tree.
 * @tree: pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Return: the balance factor of a binary tree.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != LEAF)
	{
		left_tree = _height(tree->left);
	}

	if (tree->right != LEAF)
	{
		right_tree = _height(tree->right);
	}

	return (left_tree - right_tree);
}

/**
 * _height - Function that measures the height of a binary tree.
 * @tree: pointer to the root node of the tree.
 *
 * Return: the height of the binary tree.
 */
int _height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (_height(tree->left) >= _height(tree->right))
	{
		return (1 + _height(tree->left));
	}

	return (1 + _height(tree->right));
}

