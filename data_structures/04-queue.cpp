#include "01-singly-linked-node.cpp"

class Queue {
  private:
    Node *head;

  public:
    Queue() {
      this->head = NULL;
    }


    // Add to head of list
    bool enqueue(void *data) {
      Node *myNode = new Node(data);

      if (myNode == NULL) return false;

      myNode->setNext(this->head);
      this->head = myNode;
      return true;
    }


    // Remove from tail of list
    Node* dequeue() {
      Node *previous = this->head;
      Node *current = this->head;

      while (current->getNext() != NULL) {
        previous = current;
        current = current->getNext();
      }

      previous->setNext(NULL);
      return current;
    }
};
