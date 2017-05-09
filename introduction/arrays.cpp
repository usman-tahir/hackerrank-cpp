
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printReversedArray(int array[], int length) {
  for(int i = length - 1; i >= 0; i -= 1) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

int main() {
  
  int length;
  scanf("%d", &length);
  int arr[length];

  for(int i = 0; i < length; i += 1) {
    scanf("%d", &arr[i]);
  }

  printReversedArray(arr, length);
  return 0;
}