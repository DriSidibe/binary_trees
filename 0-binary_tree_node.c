#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of new node
 * @value: the value of new node
 *
 * Return: Your function must return a pointer to
 * the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
