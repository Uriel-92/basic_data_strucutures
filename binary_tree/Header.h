#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	node* left = NULL;
	node* right = NULL;
};

node* add_node(int data, node* n);
node* delete_node(int data, node* n);
int successor(node* n);
int predecessor(node* n);
void print_tree(node* n);