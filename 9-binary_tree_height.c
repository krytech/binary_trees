#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height from node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l;
	size_t height_r;

	if (!tree)
		return (0);

	if (tree->left || tree->right)
	{
		height_l = 1 + binary_tree_height(tree->left);
		height_r = 1 + binary_tree_height(tree->right);

		if (height_l > height_r)
			return (height_l);
		else
			return (height_r);
	}
	else
		return (0);
}
