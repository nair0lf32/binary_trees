#include "binary_trees.h"
/**
*binary_tree_is_perfect - Checks if a binary tree is perfect.
*@tree: A pointer to the root node of the tree to check.
*Return: 1 if perfect or 0
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int size = 0, height = 0, is_perfect; 
if (tree == NULL)
{
return (0);
}
size = (int)binary_tree_size(tree);
height = (int)binary_tree_height(tree);
is_perfect = (pow(2, height + 1) - 1 == size);
return (is_perfect);
}
/**
*binary_tree_size - measures the size of a binary tree
*@tree: pointer to the root node of the tree to measure
*Return: the size or 0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t size = 0;
if (tree == NULL)
{
return (0);
}
size += 1;
size += binary_tree_size(tree->left);
size += binary_tree_size(tree->right);
return (size);
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
