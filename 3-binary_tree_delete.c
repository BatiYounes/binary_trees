#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree.
 * @tree: pointer to the root node of the tree to delete.
 *
 * Return: void, no return value.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == LEAF)
	{
		return;
	}

	if (tree->left)
	{
		binary_tree_delete(tree->left);
	}

	if (tree->right)
	{
		binary_tree_delete(tree->right);
	}

	free(tree);
}
