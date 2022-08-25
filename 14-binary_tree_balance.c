#include "binary_trees.h"
/**
*binary_tree_balance -  measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure
*Return: the number of nodes or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_nodes = 0, right_nodes = 0, factor = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL)
{
left_nodes = (int)binary_tree_height(tree->left) + 1;
}
if (tree->right != NULL)
{
right_nodes = (int)binary_tree_height(tree->right) + 1;
}
factor = left_nodes - right_nodes;
return (factor);
}
/**
*binary_tree_height - measures the height of a binary tree
*@tree: pointer to the root node of the tree to measure
*Return: the size or 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_nodes = 0, right_nodes = 0;
if (tree == NULL)
{
return (0);
}
if (tree->left != NULL)
{
left_nodes = binary_tree_height(tree->left) + 1;
}
if (tree->right != NULL)
{
right_nodes = binary_tree_height(tree->right) + 1;
}
if (left_nodes >= right_nodes)
{
return (left_nodes);
}
else
{
return (right_nodes);
}
}
