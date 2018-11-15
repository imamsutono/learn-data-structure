#include <stdio.h>
#include <ctype.h>

char stack[20];
int top = -1;

void push(char x) {
  stack[++top] = x;
}

char pop() {
  if (top == -1)
    return -1;
  else
    return stack[top--];
}

int priority(char operator) {
  if (operator == '(')
    return 0;

  if (operator == '+' || operator == '-')
    return 1;

  if (operator == '*' || operator == '/')
    return 2;
}

int main() {
  char str[20];
  char *e, x;

  printf("Masukkan perhitungan: ");
  scanf("%s", str);

  e = str;

  while(*e != '\0') {

    if (isalnum(*e)) {
      printf("%c", *e);
    } else if (*e == '(') {
      push(*e);
    } else if (*e == ')') {

      while((x = pop()) != '(')
        printf("%c", x);

    } else {

      while(priority(stack[top]) >= priority(*e))
        printf("%c", pop());

      push(*e);
    }

    e++;
  }

  while(top != -1) {
    printf("%c", pop());
  }

  if (top == -1) {
    printf("\n");
  }

  return 0;
}
