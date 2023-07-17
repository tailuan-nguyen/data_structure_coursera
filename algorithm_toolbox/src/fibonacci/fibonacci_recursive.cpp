#include<iostream>

/**
 * @brief Compute the n-th Fibonacci number.
 * @param n 
 * @return int n-th Fibonacci number.
 */
int fibonacci_at(int n) { 
    int curr = 1, prev = 0;
    for (int i = 2; i < n + 1; i++) {
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci_at(n) << std::endl;
    return 0;
}