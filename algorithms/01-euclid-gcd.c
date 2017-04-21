/*
  Euclid's algorithm for finding greatest common divisor
  1. [Find remainder] Divide m by n, let r be the remainder.
  2. [Is it zero?] If r = 0, the algorithm terminates; n is the answer.
  3. [Reduce] Set m = n, n = r, repeat.

  Proof:
    m = qn + r

    If r = 0, then m is a multiple of n.
    If r != 0, then the set of divisors of {m,n} is the set of divisors of {n,r}

  Analysis:
    Assuming that n is known, but m can range over all positive integers, what is the average complexity?
    Can average m=1, m=2, ..., m=n to determine average case.
    For large n, Tn is approximately (12(ln 2) / pi ^ 2) ln n
    Proportional to the natural logarithm of n
*/
int GCD(int m, int n) {
  int r = m;

  while (r != 0) {
    r = m % n;

    if (!r) break;

    m = n;
    n = r;
  }

  return n;
}
