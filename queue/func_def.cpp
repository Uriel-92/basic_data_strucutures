#include "Header.h"

node* add_node(int data, node* n) {
	
	// Create and add the new value to the node
	node* i = (node*)malloc(sizeof(node));
	i->data = data;
	i->next = NULL;

	// Condition for the first node
	if (n == NULL)
		return i;

	// Add the new node to the final
	node* r = n;
	while (r != NULL) {
		if (r->next == NULL){
			r->next = i;
			break;
		}

		r = r->next;
	}
	return n;
}

node* erease_node(node* n) {

	// Erease the last node
	node* left = n;
	node* right = n->next;

	// Condtion for the first node
	if (left->next == NULL){
		printf("There are no nodes!\n");
		return NULL;
	}

	// The rest of the nodes
	while (right != NULL) {
		if (right->next == NULL)
			left->next = NULL;

		right = right->next;
		left = left->next;
	}

	return n;
}

void print_queue(node* n) {

	// Print the list
	node* r = n;

	while (r != NULL) {

		printf("The value is: %d\n", r->data);
		r = r->next;
	}
}