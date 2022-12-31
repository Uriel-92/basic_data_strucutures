#include "Header.h"

node* add_node(int data, node* n) {
	
	// Add node to the tree
	node* i = (node*)malloc(sizeof(node));
	i->data = data;
	i->left = NULL;
	i->right = NULL;
	
	// Conditon for the first value
	node* r = n;
	if (r == NULL)
		return i;

	// Apply the condition to add
	// left <= value; right > value

	while (r != NULL) {
		// Condition to check the value and chose left o right
		if (data <= r->data) {
			if (r->left != NULL)
				r = r->left;
			else {
				r->left = i;
				break;
			}
		}
		else {
			if (r->right != NULL)
				r = r->right;
			else {
				r->right = i;
				break;
			}
		}
	}

	
	return n;

}

int successor(node* n) {
	
	// Check the most left node
	n = n->right;
	while (n->left != NULL) 
		n = n->left;
	return n->data;
}

int predecessor(node* n) {
	
	// check the most right node
	n = n->left;
	while (n->right != NULL) 
		n = n->right;
	return n->data;
}

node* delete_node(int data, node* n) {

	// Deleate a node
	if (n == NULL) 
		return n;
	else if (data < n->data) 
		n->left = delete_node(data, n->left);
	else if (data > n->data)
		n->right = delete_node(data, n->right);

	else
	{
		// Case 1: No children
		if (n->left == NULL && n->right == NULL) 
		{
			free(n);
			n = NULL;
		}
		// Case 2: Children to the right
		else if (n->left == NULL)       
		{
			node* temp = n;
			n = n->right;
			free(temp);
		}
		// Case 2: Children to the left
		else if (n->right == NULL)      
		{
			node* temp = n;
			n = n->left;
			free(temp);
		}
		// Case 3: Both, left and right have sons
		else                                 
		{
			node* temp = n->right;

			while (temp->left != NULL) 
				temp = temp->left;

			n->data = temp->data;
			n->right = delete_node(temp->data, n->right);
		}
	}


	return n;
}


void print_tree(node* n) {

	// Print inorder
	// NULL tree
	node* r = n;

	if (r == NULL)
		return;

	print_tree(r->left);
	printf("The value is: %d\n", r->data);
	print_tree(r->right);
}