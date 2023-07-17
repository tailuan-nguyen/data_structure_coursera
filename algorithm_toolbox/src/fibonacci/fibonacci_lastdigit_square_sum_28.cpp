#include<iostream>

/**
 * @brief formula f1^2 + f2^2 + f3^3 + f4^2 + f5^2 = f5 * f6
 * 
 * @param n 
 * @return int 
 */
int fibonacci_lastdigit_square_sum(unsigned long long n) {
    int result;
    unsigned long long prev = 0, curr = 1;
    for (int i = 2; i <= n + 1; i++) {
        int temp = curr;
        curr = (prev + curr) % 10;
        prev = temp;
    }
    return (prev * curr) % 10;
}

int main() {
    unsigned long long n;
    std::cin >> n;
    std::cout << fibonacci_lastdigit_square_sum(n) << std::endl;
    return 0;
}