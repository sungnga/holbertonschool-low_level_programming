#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node as the left-child
 * of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on failure or
 * if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (!parent->left)
	{
		parent->left = new_node;
		return (new_node);
	}

	parent->left->parent = new_node;
	new_node->parent = parent;
	new_node->left = parent->left;
	parent->left = new_node;
	return (new_node);
}
