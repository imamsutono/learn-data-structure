#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;

	struct node *leftChild;
	struct node *rightChild;
};

struct node *root = NULL;

void insert(int data) {
	struct node *tempNode = (struct node*) malloc(sizeof(struct node));
	struct node *current;
	struct node *parent;

	tempNode->data = data;
	tempNode->leftChild = NULL;
	tempNode->rightChild = NULL;

	// if tree is empty
	if (root == NULL) {
		root = tempNode;
	} else {
		current = root;
		parent = NULL;

		while(1) {
			parent = current;

			// go to the left of tree if current value in node is less than parent
			if (data < parent->data) {
				current = current->leftChild;

				// insert to the left
				if (current == NULL) {
					parent->leftChild = tempNode;
					return;
				}
			} // go to the right of tree
			else {
				current = current->rightChild;

				// insert to the right
				if (current == NULL) {
					parent->rightChild = tempNode;
					return;
				}
			}
		}
	}
}

struct node *search(int data) {
	struct node *current = root;
	printf("Visiting elements: ");

	while(current->data != data) {
		if (current != NULL)
			printf("%d ", current->data);
		
		// go to left tree
		if (current->data > data) {
			current = current->leftChild;
		} 
		// go to right tree
		else {
			current = current->rightChild;
		}

		// not found
		if (current == NULL) {
			return NULL;
		}
	}

	return current;
}

void pre_order_traversal(struct node* root) {
	if (root != NULL) {
		printf("%d ", root->data);
		pre_order_traversal(root->leftChild);
		pre_order_traversal(root->rightChild);
	}
}

int main() {
	int i;
	int array[7] = { 27, 14, 35, 10, 19, 31, 42 };

	for (i = 0; i < 7; i++) {
		insert(array[i]);
	}

	i = 31;
	struct node * temp = search(i);

	if (temp != NULL) {
		printf("[%d] Element found", temp->data);
		printf("\n");
	} else {
		printf("[ x ] Element not found (%d).\n", i);
	}

	i = 15;
	temp = search(i);

	if (temp != NULL) {
		printf("[%d] Element found", temp->data);
		printf("\n");
	} else {
		printf("[ x ] Element not found (%d).\n", i);
	}

	printf("\nPreorder traversal: ");
	pre_order_traversal(root);
	printf("\n");

	return 0;
}
