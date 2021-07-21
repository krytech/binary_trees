#include "binary_trees.h"

/**
 * height - helper height function used for calculating balance
 * @tree: pointer to the root node of the tree to measure
 * Return: height value
 */
size_t height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (tree)
	{

		height_l = tree->left ? 1 + height(tree->left) : 1;
		height_r = tree->right ? 1 + height(tree->right) : 1;
		return ((height_l > height_r) ? height_l : height_r);
	}
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance value
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}
