#include <stdio.h>
#include "01-singly-linked-node.cpp"

class List {
  private:
    Node *head;

  public:
    List() {
      this->head = NULL;
    }


    void printList() {
      Node *current = this->head;

      printf("\n");

      while (current != NULL) {
        printf("%d -> ", *(int*)current->getData());
        current = current->getNext();
      }

      printf("NULL\n");
    }


    bool addToHead(void *data) {
      /*
            |-------------|     |-------------|
    TOP --> | data | next | --> | data | next | --> Λ
            |-------------|     |-------------|

              INSERT
            |-------------|
   TOP -->  | data | next |
            |-------------|
                    |
                    |
                |-------------|     |-------------|
                | data | next | --> | data | next | --> Λ
                |-------------|     |-------------|

      */
      Node *myNode = new Node(data);

      if (myNode == NULL) return false;

      myNode->setNext(this->head);
      this->head = myNode;
      return true;
    }


    bool addToTail(void *data) {
      /*
            |-------------|     |-------------|
    TOP --> | data | next | --> | data | next | --> Λ
            |-------------|     |-------------|

                                                        INSERT
            |-------------|     |-------------|      |-------------|
    TOP --> | data | next | --> | data | next | -->  | data | next | --> Λ
            |-------------|     |-------------|      |-------------|
      */
      Node *previous = this->head;
      Node *current = this->head;
      Node *myNode = new Node(data);

      if (myNode == NULL) return false;

      while (current != NULL) {
        previous = current;
        current = current->getNext();
      }

      previous->setNext(myNode);

      return true;
    }
};
