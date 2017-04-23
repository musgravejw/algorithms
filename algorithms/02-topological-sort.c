/*
  Topological sorting

  A partial ordering of a set (S) is a relation (<=) between the objects of S
  which satisfies the following properties (for elements x,y,z ∈ S):
    i. transitive (x<=y, y<=z -> x<=z)
    ii. antisymmetry (x<=y, y<=z -> x=y)
    iii. reflexive (x<=x)

  As applied to a network, S can be a set of jobs to be done,
  and the relation x <= y means "x must be done before y."

  S can be assumed to be a finite set.
  The relation x <= y means there is a directed edge between the two "jobs".
  The antisymmetry property of partial ordering means there are no closed loops.

  Topological sorting is to embed the partial order in a linear sequence, such that
  for a1, a2, ..., an ; aj < ak; j < k;
  Cannot be done if cycles are present.

  1. find an object that is not preceded by another object
  2. Remove this object from the set
  3. Repeat

  
*/
