#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node.
 * @node: pointer to the node to find the uncle.
 *
 * Return: the node uncle or NULL if node is NULL or has no uncle.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *_node = NULL;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	_node = node->parent;

	if (_node->parent == NULL)
	{
		return (NULL);
	}

	if (_node->parent->left && _node->parent->left != _node)
	{
		return (_node->parent->left);
	}
	else if (_node->parent->right && _node->parent->right != _node)
	{
		return (_node->parent->right);
	}

	return (NULL);
}

