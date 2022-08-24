#include "binary_trees.h"
/**
*binary_tree_is_leaf - checks if a node is a leaf
*@node: pointer to the node to check
*Return: 1 if leaf or else 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return(0);
}
else
{
return(1);
}
}
