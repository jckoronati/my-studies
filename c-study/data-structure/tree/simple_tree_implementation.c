#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left;
    struct node *right;    
};

typedef struct node Node;

Node* create (int value)
{
    Node *nodeItem = malloc(sizeof(Node));

    nodeItem->value = value;
    nodeItem->right = NULL;
    nodeItem->left = NULL;

    return nodeItem;
}

int main(void)
{
    Node *node1 = create(1);

    return 0;
}