#include <stdio.h>
#include "../data_structures/04-queue.cpp"

void printNode(Node *node) {
  printf("%d\n", *(int*)node->getData());
}

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  Queue *queue = new Queue();

  queue->enqueue(&a);
  queue->enqueue(&b);
  queue->enqueue(&c);

  printNode(queue->dequeue());  // 1
  printNode(queue->dequeue());  // 2
  printNode(queue->dequeue());  // 3

  return 0;
}
