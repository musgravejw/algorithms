#include <stdio.h>
#include "01-singly-linked-node.cpp"

/*
  Advantages of using a linked list:

  Easy to delete an element from the list.
  Easy to insert in the middle of the list.
  Random access is slower, but iteration is a more common use case.
  Joining two lists is a trivial operation.
  Allows mutability.
  Free from architecural constraints.
*/

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


    /*
      The find method in a linked list is slower on average than a sequentially allocated data structure,
      since a full traversal of the list is required in the worst case.
    */
    Node* find(void *data) {
      Node *current = this->head;

      while (current != NULL) {
        if (current->getData() == data) return current;

        current = current->getNext();
      }

      return NULL;
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


    bool insertAtIndex(int index, Node* myNode) {
      /*
        Insertion in the middle of a list is faster than a sequentially allocated list,
        since no re-allocation is required.

              |-------------|     |-------------|
      TOP --> | data | next | --> | data | next | --> Λ
              |-------------|     |-------------|

              |-------------|          INSERT          |-------------|
      TOP --> | data | next |                          | data | next | --> Λ
              |-------------|                          |-------------|
                        |         |-------------|         |
                        |------>  | data | next |---------|
                                  |-------------|
      */
      Node* current = this->head;
      Node* previous = this->head;

      for (int i = 0; i < index; i++) {
        if (current == NULL) return false;

        previous = current;
        current = current->getNext();
      }

      previous->setNext(myNode);
      myNode->setNext(current);

      return true;
    }


    Node* deleteAtIndex(int index) {
      /*
        Deletion is usually faster than that in a sequentially allocated list,
        since one node can be removed, and the list does not have to be re-allocated.

              |-------------|     |-------------|      |-------------|
      TOP --> | data | next | --> | data | next | -->  | data | next | --> Λ
              |-------------|     |-------------|      |-------------|

              |-------------|         REMOVE           |-------------|
      TOP --> | data | next | ---------------------->  | data | next | --> Λ
              |-------------|                          |-------------|
                                  |-------------|         |
                                  | data | next |---------|
                                  |-------------|

      */
      Node* current = this->head;
      Node* previous = this->head;

      for (int i = 0; i < index; i++) {
        if (current == NULL) return NULL;

        previous = current;
        current = current->getNext();
      }

      previous->setNext(current->getNext());
      return current;
    }
};
