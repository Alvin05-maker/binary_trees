#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert a node to the left of another node
 *
 * @parent: the parent to insert node to
 * @value: the vlaue to insert in the new node
 *
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (NewNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		NewNode->left = parent->left;
		parent->left->parent = NewNode;
	}
	parent->left = NewNode;

	return (NewNode);
}
