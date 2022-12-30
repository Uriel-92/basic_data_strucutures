#include "Header.h"

int main() {

	// Test for one node
	node* n = NULL;
	n = add_node(1, n);
	print_stack(n);
	n = erease_node(n);
	print_stack(n);


	// Create 10 nodes
	int i;
	for (i = 0; i <= 10; i++)
		n = add_node(i, n);

	print_stack(n);

	// Erease the first three node
	for (i = 0; i <= 3; i++)
		n = erease_node(n);

	print_stack(n);

	return 0;
}