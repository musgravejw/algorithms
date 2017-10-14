/*
  Topological sorting

  A partial ordering of a set (S) is a relation (<=) between the objects of S
  which satisfies the following properties (for elements x,y,z ∈ S):
    i. transitive (x<=y, y<=z -> x<=z)
    ii. antisymmetry (x<=y, y<=z -> x=y)
    iii. reflexive (x<=x)

  As applied to a network, S can be a set of jobs to be done (with dependencies),
  and the relation x <= y means "x must be done before y."

  S can be assumed to be a finite set.
  The relation x <= y means there is a directed edge between the two "jobs".
  The antisymmetry property of partial ordering means there are no closed loops.

  Topological sorting is to embed the partial order in a linear sequence, such that
  for a1, a2, ..., an ; aj < ak; j < k;
  Cannot be done if cycles are present.  Circular definitions are a good example.

  1. find an object that is not preceded by another object
  2. Remove this object from the set
  3. Repeat

  * If every element has a precedent, then this algorithm will not work, since it violates the problem constraints

example input, ordered pair (j,k) indicates that j precedes k
(9,2)
(3,7)
(7,5)
(5,8)
(8,6)
(4,6)
(1,3)
(7,4)
(9,5)
(2,8)

*/

#include "../data_structures/05-graph-node.cpp"

int main() {
  GraphNode *nodes[9];

  for (int i = 0; i < sizeof(nodes); i++) {
    nodes[i] = new GraphNode(&i);
  }

  // initialize the graph
  nodes[9]->addEdge(nodes[2]);
  nodes[3]->addEdge(nodes[7]);
  nodes[7]->addEdge(nodes[5]);
  nodes[5]->addEdge(nodes[8]);
  nodes[8]->addEdge(nodes[6]);
  nodes[4]->addEdge(nodes[6]);
  nodes[1]->addEdge(nodes[3]);
  nodes[7]->addEdge(nodes[4]);
  nodes[9]->addEdge(nodes[5]);
  nodes[2]->addEdge(nodes[8]);

  // do not search the graph

  // get the next <= relation
  // record
  // scan for zeroes
  // output front of queue
  // erase relations
  // remove from queue

  return 0;
}
