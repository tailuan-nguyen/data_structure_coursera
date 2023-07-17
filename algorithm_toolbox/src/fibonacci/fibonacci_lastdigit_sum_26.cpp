#include<iostream>

/**
 * @brief Compute the last digit of F0 +F1 +···+Fn.
 * Constraints. 0 ≤ n ≤ 10^14
 * @param n 
 * @return int (F0 +F1 +···+Fn) mod 10.
 */
unsigned long long fibonacci_sum_lastdigit(unsigned long long n){
    if (n < 2) {
        return n;
    }
    int sum_fibonacci = 1;
    int prev = 0;
    int curr = 1;
    for (unsigned long long i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = (curr + prev) % 10;
        prev = temp;
        sum_fibonacci = sum_fibonacci + curr;  
    }
    return sum_fibonacci % 10;
}

int main() {
    unsigned long long n;
    std::cin >> n;
    std::cout << fibonacci_sum_lastdigit(n) << std::endl;
    return 0;
}