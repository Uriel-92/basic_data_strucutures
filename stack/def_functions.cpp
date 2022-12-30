#include "Header.h"

node* add_node(int data, node* n) {

	// Create new node
	node* i = (node*)malloc(sizeof(node));
	i->data = data;
	i->next = NULL;
	node* r = n;

	// Condtion for the first value
	if (n == NULL)
		return i;

	// Add the rest of the nodes
	while (r != NULL) {
		if (r->next == NULL) {
			r->next = i;
			break;
		}
		r = r->next;
	}
	return n;
}

node* erease_node(node* n) {

	// Erease node
	if (n->next == NULL){
		printf("There are no values in the stack!\n");
		return NULL;
	}

	return n->next;
}

void print_stack(node* n) {

	// Print all values
	node* r = n;
	while (r != NULL) {
		printf("The values are %d\n", r->data);
		r = r->next;
	}
}