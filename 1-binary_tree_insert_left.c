#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child of
 * another node
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure,
 * or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node = NULL;

	if (parent == LEAF)
	{
		return (NULL);
	}

	insert_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		parent->left->parent = insert_node;
		insert_node->left = parent->left;
	}

	parent->left = insert_node;

	return (insert_node);
}
