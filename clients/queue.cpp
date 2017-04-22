#include "../data_structures/04-queue.cpp"

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  Queue *queue = new Queue();

  queue->enqueue(&a);
  queue->enqueue(&b);
  queue->enqueue(&c);

  //list->printList();

  queue->dequeue();
  queue->dequeue();

  //list->printList();

  return 0;
}
