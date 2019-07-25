#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 * @node: A pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right != NULL)
		return (node->parent->right);
	if (node->parent->right == node && node->parent->left != NULL)
		return (node->parent->left);
	return (NULL);
}


/**
 * binary_tree_uncle - A function that finds the uncle of a node
 * @node: A pointer to the node to find the uncle
 *
 * Return: A pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}


/**
 * binary_trees_ancestor - A function that finds the lowest common ancestor
 * of two nodes
 * @first: A pointer to the first node
 * @second: A pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(binary_tree_t *first,
				     binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);
	if (first->parent == NULL || second->parent == NULL)
		return (NULL);

	if (binary_tree_sibling(first) == second)
		return (first->parent);

	if (binary_tree_uncle(second) == first)
		return (first->parent);

	if (second->parent == first)
		return (first);
	return (NULL);
}
