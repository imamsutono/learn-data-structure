#include <stdio.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isempty() {
	if (top == -1)
		return 1;
	else
		return 0;
}

int isfull() {
	if (top == MAXSIZE)
		return 1;
	else
		return 0;
}

int push(int data) {
	if (!isfull()) {
		top = top + 1;
		stack[top] = data;
	} else {
		printf("Tidak dapat menambahkan data, stack sudah penuh.\n");
	}
}

int pop() {
	int data;

	if(!isempty()) {
		data = stack[top];
		top = top - 1;
		return data;
	} else {
		printf("Tidak dapat mengambil, stack masih kosong\n");
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
