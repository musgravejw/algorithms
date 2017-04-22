/*
  Information in a list or table consists of a set of nodes.
  Each node consists of one or more fields.
  The contents of any field may represent numeric data, characters, links or other data.
  The "next" field is a reference to another node.
  Next can also hold a reference to lambda, or the null link, which indicates a link to no node.
          |-------------|     |-------------|
  TOP --> | data | next | --> | data | next | --> Λ
          |-------------|     |-------------|
*/
class Node {
  private:
    Node *next;
    void* data;

  public:
    Node(void* data) {
      this->next = NULL;
      this->data = data;
    }

    void* value() {
      return this->data;
    }

    Node* getNext() {
      return this->next;
    }

    void setNext(Node* node) {
      this->next = node;
    }

    void* getData() {
      return this->data;
    }

    void setData(void* data) {
      this->data = data;
    }
};
