#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_balance - A function that measures the balance factor
 * of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The value of the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a, b;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	a = binary_tree_height(tree->left);
	b = binary_tree_height(tree->right);
	return (a - b);
}


/**
 * binary_tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The value of height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left_height = 0;
        size_t right_height = 0;

        if (tree == NULL)
                return (0);

        if (tree->left == NULL && tree->right == NULL)
                return (0);

        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);
        if (left_height > right_height)
                return (left_height += 1);
        else
                return (right_height += 1);
}
