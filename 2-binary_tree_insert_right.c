#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert node to the right side of another node;
 *
 * @parent: the parent to insert node to
 * @value: the value to insert in the new node
 *
 * Return: returns the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode;

	NewNode = binary_tree_node(parent, value);
	if (!parent || !NewNode)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		NewNode->right = parent->right;
		parent->right->parent = NewNode;
	}
	parent->right = NewNode;
	NewNode->n = value;

	return (NewNode);

}
