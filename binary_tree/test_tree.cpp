#include "Header.h"

int main() {
	
	// Test the tree for a one element
	node* n = NULL;
	n = add_node(5, n);
	n = add_node(3, n);
	n = add_node(10, n);
	print_tree(n);

	// Remove the node with the value 3
	printf("\n\n\nRemoving values!\n\n\n");
	n = delete_node(3, n);
	print_tree(n);

	free(n);
	return 0;
}