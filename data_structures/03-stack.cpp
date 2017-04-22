#include "01-singly-linked-node.cpp"

class Stack {
  private:
    Node *head;

  public:
    Stack() {
      this->head = NULL;
    }


    bool push(void *data) {
      Node *myNode = new Node(data);

      if (myNode == NULL) return false;

      myNode->setNext(this->head);
      this->head = myNode;
      return true;
    }


    Node* pop() {
      Node *current;

      if (this->head != NULL) {
        current = head;
        head = current->getNext();
        return current;
      }

      return NULL;
    }
};
