#include<iostream>

/**
 * @brief polynomial algorithm, a faster algorithm -> O(n^2)
 * There are also a faster way to compute fibonacci number -> using matrix multiplication. refer to book
 * There are also fomula to compute fibonacci number
 * @param n n_th fibonacci number
 * @return long long value of n_th fibonacci number
 */
long long huge_fibonacci(long long n, int m) {
    if (n <= 1) {
        return n;
    }
    int prev = 0, curr = 1;
    for (unsigned long long i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
    }
    return curr;
}

int main() {
    while(true) {
        long long n;
        int m;
        std::cin >> n >> m;
        std::cout << huge_fibonacci(n, m) << std::endl;
    }
    return 0;
}