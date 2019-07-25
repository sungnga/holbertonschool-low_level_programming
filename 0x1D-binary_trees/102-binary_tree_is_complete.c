#include "binary_trees.h"

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 *
 * Return: Value of the size of a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 +
			binary_tree_size(tree->right));
}

/**
 * is_complete - A function that checks if a binary tree is complete
 * @tree: A pointer to the root node of the tree to check
 * @index: The index of the node
 * @num: The number of the nodes in the binary tree
 *
 * Return: 1 if the tree is complete, otherwise 0
 */
int is_complete(const binary_tree_t *tree, size_t index, size_t num)
{
	if (tree == NULL)
		return (1);

	if (index >= num)
		return (0);

	return (is_complete(tree->left, 2 * index + 1, num) *
		is_complete(tree->right, 2 * index + 2, num));
}


/**
 * binary_tree_is_complete - A function that checks if a binary tree
 * is complete
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, otherwise 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t count;
	size_t index = 0;

	if (tree == NULL)
		return (0);

	count = binary_tree_size(tree);

	return (is_complete(tree, index, count));
}
