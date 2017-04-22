#include "../data_structures/03-stack.cpp"

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  Stack *stack = new Stack();

  stack->push(&a);
  stack->push(&b);
  stack->push(&c);

  //list->printList();

  stack->pop();
  stack->pop();

  //list->printList();

  return 0;
}
