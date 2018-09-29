#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int push(int data) {
	if (!isfull()) {
		top = top + 1;
		stack[top] = data;
	} else {
		printf("Could not insert data, stack is full.\n");
	}
}

int main() {
	// panggil fungsi push untuk menumpuk data pada stack
	push(1);
	push(7);
	push(3);
	push(9);
	push(2);
	push(4);
	push(13);
	push(10);

	printf("Elements:\n");

	// cetak data pada stack
	while(!isempty()) {
		int data = pop();
		printf("%d\n", data);
	}
	
	return 0;
}
