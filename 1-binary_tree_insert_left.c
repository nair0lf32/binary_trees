#include "binary_trees.h"
/**
*binary_tree_insert_left - inserts a node as the left-child of another node
*@parent: pointer to the parent node to insert on
*@value: value for the new node
*Return: return a pointer to the created node or NULL if failure
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = binary_tree_node(parent, value);
if (node == NULL)
{
free(node);
return (NULL);
}
if (parent == NULL)
{
free(parent);
return (NULL);
}
if (parent->left != NULL)
{
node->left = parent->left;
node->left->parent = node;
}
parent->left = node;
return (node);
}
