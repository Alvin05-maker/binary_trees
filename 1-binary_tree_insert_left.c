#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t * NewNode;

	NewNode = binary_tree_node(parent, value);
	if (parent == NULL)
		return (NULL);
	if (NewNode == NULL)
	{
		return (NULL);
	}

	if (parent->left != NULL)
	{
		NEwNode->left = parent->left;
		parent->left = parent->left;
	}
	parent->left = NewNode;

	return (NewNode);
