#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (!tree)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * print_level - Prints all nodes at a specific level.
 * @tree: Pointer to the root node of the tree to traverse.
 * @level: Level to print.
 * @func: Pointer to a function to call for each node.
 */
void print_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
    if (!tree)
        return;

    if (level == 1)
        func(tree->n);
    else if (level > 1)
    {
        print_level(tree->left, level - 1, func);
        print_level(tree->right, level - 1, func);
    }
}

/**
 * binary_tree_levelorder - Goes through a binary tree using level-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
        return;

    size_t height = binary_tree_height(tree);
    for (size_t i = 1; i <= height; i++)
        print_level(tree, i, func);
}
