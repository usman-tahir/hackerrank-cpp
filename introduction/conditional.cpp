
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n >= 1 && n <= 9) {
    switch (n) {
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
    printf("Greater than 9\n");
  }
  return 0;
}