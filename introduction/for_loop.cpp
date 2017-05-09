
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
  int a, b;

  // Get the input, seperated by a newline
  scanf("%d\n%d", &a, &b);

  // Construct the for-loop, and apply the logic for STDOUT
  for(int i = a; i < b + 1; i += 1) {
    if (i >= 1 && i <= 9) {
      switch (i) {
        case 1:
          printf("one\n");
          break;
        case 2:
          printf("two\n");
          break;
        case 3:
          printf("three\n");
          break;
        case 4:
          printf("four\n");
          break;
        case 5:
          printf("five\n");
          break;
        case 6:
          printf("six\n");
          break;
        case 7:
          printf("seven\n");
          break;
        case 8:
          printf("eight\n");
          break;
        case 9:
          printf("nine\n");
          break;
        default:
          break;
      }
    } else {
      if (i % 2 == 0) {
        printf("even\n");
      } else {
        printf("odd\n");
      }
    }
  } 
  return 0;
}