#include "binary_trees.h"
/**
*binary_tree_leaves - counts the leaves in a binary tree
*@tree: pointer to the root node of the tree
*Return: the leaves number or 0 if tree is NULL
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leaves = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
leaves += binary_tree_leaves(tree->left);
leaves += binary_tree_leaves(tree->right);
return (leaves);
}
