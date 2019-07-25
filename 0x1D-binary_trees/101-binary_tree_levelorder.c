#include "binary_trees.h"

/**
 * binary_tree_levelorder - A function that goes through a binary tree using
 * level-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node. The value in the node
 * must be passed as a parameter to this function
 *
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
}
