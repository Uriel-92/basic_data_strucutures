#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int dato;
	node* next = NULL;
};

node* insert_new_node(int value, node* n);
node* erease_node(int value, node* n);
int print_list(node* n);