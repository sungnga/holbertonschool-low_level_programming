#include "binary_trees.h"

/**
 * find_max - A function that finds the maximum value right subtree
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: The max value of the tree
 */
binary_tree_t *find_max(const binary_tree_t *tree)
{
	if (tree == NULL)
		return ((binary_tree_t *)tree);

	while (tree->right)
		tree = tree->right;
	return ((binary_tree_t *)tree);
}

/**
 * find_min - A function that finds the min value right subtree
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: The min value of the tree
 */
binary_tree_t *find_min(const binary_tree_t *tree)
{
	if (tree == NULL)
		return ((binary_tree_t *)tree);

	while (tree->left)
		tree = tree->left;
	return ((binary_tree_t *)tree);
}

/**
 * binary_tree_is_bst - A function that checks if a binary tree is a
 * valid Binary Search Tree
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int is_left, is_right;
	const binary_tree_t *max, *min;

	if (tree == NULL)
		return (0);

	if (!tree->left || !tree->right)
		return (1);

	is_left = binary_tree_is_bst(tree->left);
	is_right = binary_tree_is_bst(tree->right);

	if (is_left && is_right)
	{
		max = NULL;
		min = NULL;

		if (tree->left)
			max = find_max(tree->left);
		if (tree->right)
			min = find_min(tree->right);

		if (max && !min)
			return (tree->n > max->n);
		if (!max && min)
			return (tree->n < min->n);
		return (tree->n > max->n && tree->n < min->n);
	}
	return (0);
}
