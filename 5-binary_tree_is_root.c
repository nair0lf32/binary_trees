#include "binary_trees.h"
/**
*binary_tree_is_leaf - checks if a given node is a root
*@node: pointer to the node to check
*Return: 1 if leaf or else 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent != NULL )
{
return (0);
}
else
{
return (1);
}
}
