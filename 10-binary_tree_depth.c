#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth from node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t parent;

	if (!tree)
		return (0);

	if (tree->parent)
	{
		parent = 1 + binary_tree_depth(tree->parent);
		return (parent);
	}
	else
		return (0);
}
