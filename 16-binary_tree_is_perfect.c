#include "binary_trees.h"

int _height(const binary_tree_t *tree);
int is_perfect(const binary_tree_t *tree, int height, int depth);

/**
 * binary_tree_is_perfect - Function that checks if a binary tree
 * is perfect.
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 0 if the binary tree is perfect, 1 if it's not.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, height_result = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = _height(tree->left);
	right_height = _height(tree->right);

	if (left_height > right_height)
	{
		height_result = 1 + left_height;
	}
	else
	{
		height_result = 1 + right_height;
	}

	return (is_perfect(tree, height_result, 0));
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

/**
 * is_perfect - Function that checks if a binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * @height: the binary tree height.
 * @depth: the binary tree depth.
 *
 * Return: 0 if the binary tree is perfect, 1 if it's not.
 */
int is_perfect(const binary_tree_t *tree, int height, int depth)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == LEAF && tree->right == LEAF)
	{
		return (height == depth + 1);
	}

	if (tree->left == LEAF || tree->right == LEAF)
	{
		return (0);
	}

	return (is_perfect(tree->left, height, depth + 1) &&
					is_perfect(tree->right, height, depth + 1));
}

