#include "Header.h"

int main() {

	// Test for one node
	node* n = NULL;
	n = add_node(1, n);
	print_queue(n);
	n = erease_node(n);
	print_queue(n);

	// Test for a 10 nodes
	int i;
	for (i = 0; i <= 10; i++)
		n = add_node(i, n);

	print_queue(n);

	// Erease the last nodes three times
	for (i = 0; i <= 3; i++)
		n = erease_node(n);

	print_queue(n);

	return 0;
}