#include <cstdio>

int main() {

  long t;
  scanf("%ld", &t);
  while (t--) {
    long x, y, k;
    scanf("%ld %ld %ld", &x, &y, &k);
    long m = (x < y ? x : y);
    printf("0 0 %ld %ld
0 %ld %ld 0
", m, m, m, m);
  }
}