#include <iostream>
#include <vector>
#include <cstdlib>
#include <iterator>

using std::vector;
using std::swap;

void print_vector(const vector<int> &a) {
  int size = a.size(); 
  for (int i = 0; i < a.size(); i++) {
    std::cout << a.at(i) << " ";
  }
  std::cout << std::endl;
}

/**
 * @brief partition using first element as 
 * 
 * @param a vector need to be sort
 * @param left first element of vector 
 * @param right last element of vector
 * @return int index of pivot after being put into correct position
 */
int partition_index0(vector<int> &a,const int left,const int right) {
  //Enter your code here 
  int pivot_value = a.at(left);
  int j = left;
  for (int i = left + 1; i <= right; i++) {
    if (pivot_value >= a.at(i)) {
      std::swap(a[i], a[j + 1]);
      j++;      
    }    
  }
  std::swap(a[left], a[j]);
  return j;
}

/**
 * @brief randomized quicksort, pick pivot as random then swap with first element
 * 
 * @param a unsorted array 
 * @param left 
 * @param right 
 */
void randomized_quick_sort(vector<int> &a, int left, int right) {
  if (left >= right) { 
    return;
  }
  std::srand(1);
  int random_index = left + rand() % (right - left + 1);
  std::swap(a[left], a[random_index]);
  std::cout << "swap random: ";
  print_vector(a);
  int pivot = partition_index0(a, left, right);
  std::cout << "index: " << pivot << " value: " << a[pivot] << std::endl;
  print_vector(a);
  randomized_quick_sort(a, left, pivot - 1);
  randomized_quick_sort(a, pivot + 1, right);
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  randomized_quick_sort(a, 0, a.size() - 1);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cout << a[i] << ' ';
  }
}
