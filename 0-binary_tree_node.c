#include "binary_trees.h"
/**
*binary_tree_node - creates a binary tree node
*@parent: pointer to the parent node
*@value: value for the new node
*Return: return a pointer to the new node or NULL if failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node;
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
{
free(node);
return (NULL);
}
node->parent = parent;
node->n = value;
node->left = NULL;
node->right = NULL;
return (node);
}
