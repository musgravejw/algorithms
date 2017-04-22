#include "../data_structures/02-singly-linked-list.cpp"

int main() {
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 4;

  List *list = new List();

  list->addToHead(&a);
  list->addToHead(&b);
  list->addToHead(&c);

  list->printList();

  list->addToTail(&a);
  list->addToTail(&b);
  list->addToTail(&c);

  list->printList();

  list->insertAtIndex(2, new Node(&d));
  list->printList();

  list->deleteAtIndex(1);
  list->printList();

  return 0;
}
