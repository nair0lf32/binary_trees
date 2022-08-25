#include "binary_trees.h"
/**
*binary_tree_balance -  measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure
*Return: the number of nodes or 0
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t factor = 0;
if (tree == NULL)
{
return (0);
}
factor = binary_tree_height(tree->left) - binary_tree_height(tree->right);
return (factor);
}
