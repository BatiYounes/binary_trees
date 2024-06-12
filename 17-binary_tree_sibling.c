#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: pointer to the node to find the sibling.
 *
 * Return: NULL if node is NULL or the parent is NULL or
 * node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->left != LEAF && node->parent->left != node)
	{
		return (node->parent->left);
	}
	else if (node->parent->right != LEAF && node->parent->right != node)
	{
		return (node->parent->right);
	}

	return (NULL);
}

