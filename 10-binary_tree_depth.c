#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth
 * of a node in a binary tree.
 * @tree: pointer to the node to measure the depth.
 *
 * Return: the depth of the tree, or NULL if not a tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->parent == NULL)
	{
		return (0);
	}

	tree_depth = binary_tree_depth(tree->parent);

	return (tree_depth + 1);
}

