#include<iostream>

/**
 * @brief polynomial algorithm, a faster algorithm -> O(n^2)
 * There are also a faster way to compute fibonacci number -> using matrix multiplication. refer to book
 * There are also fomula to compute fibonacci number
 * @param n n_th fibonacci number
 * @return long long value of n_th fibonacci number
 */
long long fibonacci_lastdigit(int n) {
    if (n < 2) {
        return n;
    }
    int prev = 0;
    int curr = 1;
    for (int i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = (prev + curr) % 10;
        prev = temp;
    }
    return curr;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << fibonacci_lastdigit(n) << std::endl;
    return 0;
}