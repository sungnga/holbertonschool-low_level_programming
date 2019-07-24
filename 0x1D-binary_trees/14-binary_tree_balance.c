#include "binary_trees.h"

/**
 * tree_height - A function that measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height.
 * @a: A pointer to the subtree node to measure the left height
 * @b: A pointer to the subtree node to measure the right height
 *
 * Return: The value of height
 */
int tree_height(const binary_tree_t *tree, int *a, int *b)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left, a, b);
	right_height = tree_height(tree->right, a, b);
	*a = left_height;
	*b = right_height;
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}


/**
 * binary_tree_balance - A function that measures the balance factor
 * of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The value of the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int a = 0, b = 0;

	if (tree == NULL)
		return (0);

	tree_height(tree, &a, &b);
	return (a - b);
}
