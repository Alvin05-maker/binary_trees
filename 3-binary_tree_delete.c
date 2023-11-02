#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)/* Not NULL */
	{
		binary_tree_delete(tree->left);/*RECURSIVE STRATEGY */
		binary_tree_delete(tree->right);
		free(tree);
	}
}
