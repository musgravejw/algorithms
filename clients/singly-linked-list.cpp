#include "../data_structures/02-singly-linked-list.cpp"

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  List *list = new List();

  list->addToHead(&a);
  list->addToHead(&b);
  list->addToHead(&c);

  list->printList();

  list->addToTail(&a);
  list->addToTail(&b);
  list->addToTail(&c);

  list->printList();

  return 0;
}
