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

        void setNext(Node* node) {
            this->next = node;
        }

        void setData(void* data) {
            this->data = data;
        }
};

