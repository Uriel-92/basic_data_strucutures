#include "Header.h"

int main() {

	// Test the linked list
	node* n = NULL;
	int i;
	for (i = 1; i <= 10; i++)
		n = insert_new_node(i, n);

	// Print test with all values added
	printf("All values added!\n");
	print_list(n);

	// Print list without the 2, 4, 6 values
	n = erease_node(2, n);
	print_list(n);
	n = erease_node(4, n);
	print_list(n);
	n = erease_node(6, n);
	print_list(n);

	//Erase the extreame values
	n = erease_node(1, n);
	n = erease_node(10, n);
	print_list(n);

	free(n);

	return 0;
}