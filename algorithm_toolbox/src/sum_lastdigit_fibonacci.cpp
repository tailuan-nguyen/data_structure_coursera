#include<iostream>

int sum_lastdigit_fibonacci(unsigned long long n){
    int sum_fibonacci = 1;
    int prev = 0;
    int curr = 1;
    for (unsigned long long i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = curr + prev;
        prev = temp;
        sum_fibonacci += curr;      
    }
    return sum_fibonacci % 10;
}

int main() {
    while(true){
        unsigned long long n;
        std::cin >> n;
        std::cout << sum_lastdigit_fibonacci(n) << std::endl;
    }

    return 0;
}