#include "Header.h"

// Insert nodes
node* insert_new_node(int value, node* n) {
	
	/* Insert a new node with a different value */
	node* i = (node*)malloc(sizeof(node));
	i->dato = value;
	i->next = NULL;
	node* r = n;

	// Condtion for the first value
	if (r == NULL)
		return i;

	// Assing the new value to the last part
	while (r != NULL){
		if (r->next == NULL){
			r->next = i;
			break;
		}
		r = r->next;
	}

	return n;
}

// Erase node according to the value
node* erease_node(int value, node* n) {

	node* left = n;
	node* right = n->next;

	// The value it's the first
	if (left->dato == value)
		if (left->next == NULL)
			return left->next;
		else
			return left->next;

	// Check the next values
	while (right != NULL) {
		if (right->dato == value) {
			right = right->next;
			left->next = right;
			printf("Erasing the value: %d\n", value);
			break;
		}
			right = right->next;
			left = left->next;
	}

	if (left == NULL && right == NULL)
		printf("No value founded");

	return n;
}

// Print the list
int print_list(node* n) {
	// Empty list
	if (n == NULL){
		printf("No nodes in the list");
		return 0;
	}
	else if (n->next == NULL){
		// Print the first value
		printf("The are only one value: %d\n", n->dato);
		return 0;
	}

	// Print the remaining values
	while (n != NULL){
		printf("The value is: %d\n", n->dato);
		n = n->next;
	}

	return 0;
}
