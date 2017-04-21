/*
  Euclid's algorithm for finding greatest common divisor
  1. [Find remainder] Divide m by n, let r be the remainder.
  2. [Is it zero?] If r = 0, the algorithm terminates; n is the answer.
  3. [Reduce] Set m = n, n = r, repeat.
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
