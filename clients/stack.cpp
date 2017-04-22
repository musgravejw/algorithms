#include <stdio.h>
#include "../data_structures/03-stack.cpp"

void printNode(Node *node) {
  printf("%d\n", *(int*)node->getData());
}

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  Stack *stack = new Stack();

  stack->push(&a);
  stack->push(&b);
  stack->push(&c);

  printNode(stack->pop());  // 3
  printNode(stack->pop());  // 2
  printNode(stack->pop());  // 1

  return 0;
}
