#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node
 * in a binary tree
 * @tree: A pointer to the node to measure the depth
 *
 * Return: The depth value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}


/**
 * binary_trees_ancestor - A function that finds the lowest common ancestor
 * of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth;
	size_t second_depth;
	size_t gap;

	if (first == NULL || second == NULL)
		return (NULL);

	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);

	if (first_depth > second_depth)
	{
		gap = first_depth - second_depth;
		while (gap--)
			first = first->parent;
	}

	if (second_depth > first_depth)
	{
		gap = second_depth - first_depth;
		while (gap--)
			second = second->parent;
	}

	while (first != second)
	{
		if (first == NULL || second == NULL)
			return (NULL);
		first = first->parent;
		second = second->parent;
	}

	return ((binary_tree_t *)first);
}
