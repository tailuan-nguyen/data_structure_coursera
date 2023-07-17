#include<iostream>

/**
 * @brief Huge Fibonacci Number Problem
 * Compute the n-th Fibonacci number modulo m
 * Constraints. 1 ≤ n ≤ 1014, 2 ≤ m ≤ 103.
 * @param n
 * @param m 
 * @return n-th Fibonacci number modulo m
 */
int fibonacci_huge(long long n, int m) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, curr = 1;
    for (long long i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
    }
    return curr;
}

int main() {
    long long n;
    int m;
    std::cin >> n >> m;
    std::cout << fibonacci_huge(n, m) << std::endl;
    return 0;
}