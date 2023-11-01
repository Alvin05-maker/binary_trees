#include "binary_trees.h"
/**
 * binary_tree_node - creates a newnode
 *
 * @parent: the parent of the new node
 * @value: the value of dat to be inserted
 *
 * Return: return the pointer to the newNode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (newNode ==  NULL) /* allocation error */
	{
		return NULL;
	}
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}
