#include<iostream>

/**
 * @brief brute force fibonnaci algorithm, take very to compute at n = 100 because of many duplication in computatin 
 * exponential algorithm 
 * @param n the n_th fibonacci number
 * @return int return the value of the fibonacci number
 */
int fibonacci_at(int n) { 
    if (n <= 1) {
        return n;
    }
    return fibonacci_at(n - 1) + fibonacci_at(n - 2);
}

int main() {
    int size;
    std::cin >> size;
    std::cout << fibonacci_at(size) << std::endl;
    return 0;
}