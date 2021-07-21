#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (1);

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
