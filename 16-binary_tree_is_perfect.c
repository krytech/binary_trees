#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
		return (1);
	return (0);
}
