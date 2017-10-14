#include <stddef.h>

class GraphNode {
  private:
    GraphNode **edges;
    void* data;
    int order;

  public:
    GraphNode(void* data) {
      this->edges = NULL;
      this->data = data;
      this->order = 0;
    }

    void* value() {
      return this->data;
    }

    GraphNode** getEdges() {
      return this->edges;
    }

    void addEdge(GraphNode* node) {
      this->edges[order] = node;
      this->order++;
    }

    void* getData() {
      return this->data;
    }

    void setData(void* data) {
      this->data = data;
    }

    int getOrder() {
      return this->order;
    }
};
