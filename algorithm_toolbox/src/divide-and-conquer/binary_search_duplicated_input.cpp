#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search_duplicated_input(const vector<int> &a, int x) {
  int leftIndex = 0, rightIndex = (int)a.size() - 1; 
  if (a.at(leftIndex) > x || a.at(rightIndex) < x){
    return -1;
  }

  while (leftIndex <= rightIndex) {
    int midIndex = (leftIndex + rightIndex) / 2;
    if (a.at(midIndex) == x) {
      if (midIndex == 0 || a.at(midIndex - 1) != x) {
        return midIndex;
      } 
    }
    if (a.at(midIndex) < x) {
      leftIndex = midIndex + 1;   // add 1 to avoid infinite repeated loop.
    } else {
      rightIndex = midIndex - 1;  // subtract 1 to avoid infinite repeated loop. 
    }
  }
  return -1;
}

int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search_duplicated_input(a, b[i]) << ' ';
  }
}
