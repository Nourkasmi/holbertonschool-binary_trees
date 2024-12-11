#include "binary_trees.h"

/**
 * binary_tree_porder - Traverses a binary tree using post-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: post-order traversal visits nodes in the following order:
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;
binary_tree_porder(tree->left, func);
binary_tree_porder(tree->right, func);
func(tree->n);
}
