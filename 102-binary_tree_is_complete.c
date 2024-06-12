#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    const binary_tree_t **queue;
    size_t front = 0, rear = 0, size = 1024; /* Initial size of the queue */
    int flag = 0;

    if (!tree)
        return (0);

    queue = malloc(sizeof(*queue) * size);
    if (!queue)
        return (0);

    queue[rear++] = tree;

    while (front < rear)
    {
        const binary_tree_t *node = queue[front++];

        if (!node)
        {
            flag = 1;
        }
        else
        {
            if (flag)
            {
                free(queue);
                return (0);
            }

            if (rear >= size)
            {
                size *= 2;
                queue = realloc(queue, sizeof(*queue) * size);
                if (!queue)
                    return (0);
            }

            queue[rear++] = node->left;
            queue[rear++] = node->right;
        }
    }

    free(queue);
    return (1);
}
