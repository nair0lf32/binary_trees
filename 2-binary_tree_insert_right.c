#include "binary_trees.h"
/**
*binary_tree_insert_right - inserts a node as the right-child of another node
*@parent: pointer to the parent node to insert on
*@value: value for the new node
*Return: return a pointer to the created node or NULL if failure
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *node;
if (parent == NULL)
{
free(parent);
return (NULL);
}
node = binary_tree_node(parent, value);
if (node == NULL)
{
free(node);
return (NULL);
}
if (parent->right != NULL)
{
node->right = parent->right;
node->right->parent = node;
}
parent->right = node;
return (node);
}
