#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	node* next = NULL;
};

node* add_node(int data, node* n);
node* erease_node(node* n);
void print_stack(node* n);