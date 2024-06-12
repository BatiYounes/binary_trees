#include "binary_trees.h"

/**
 * binary_tree_insert_right - Function that inserts a node
 * as the right-child of
 * another node.
 * @parent: pointer to the node to insert the right-child in.
 * @value: value to store in the new node.
 *
 * Return: pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *insert_node = NULL;

	if (parent == LEAF)
	{
		return (NULL);
	}

	insert_node = binary_tree_node(parent, value);

	if (parent->right)
	{
		parent->right->parent = insert_node;
		insert_node->right = parent->right;
	}

	parent->right = insert_node;

	return (insert_node);
}
