
#include <iostream>
#include <cstdio>

using namespace std;

int max_of_four(int a, int b, int c, int d) {
  int max_a_b = a > b ? a : b;
  int max_c_d = c > d ? c : d;
  return (max_a_b > max_c_d ? max_a_b : max_c_d);
}

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  int ans = max_of_four(a, b, c, d);
  printf("%d\n", ans);
}