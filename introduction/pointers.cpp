
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

void update(int *a, int *b) {
  // use of temp variables preserves the original passed in values
  int temp_a = *a + *b;
  int temp_b = abs(*a - *b);
  *a =temp_a;
  *b = temp_b;
}

int main() {
  int a, b;
  int *p_a = &a, *p_b = &b;

  scanf("%d %d", &a, &b);
  update(p_a, p_b);
  printf("%d\n%d\n", a, b);

  return 0;
}