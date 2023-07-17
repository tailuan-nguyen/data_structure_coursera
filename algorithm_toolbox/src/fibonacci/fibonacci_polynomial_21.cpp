#include<iostream>

unsigned long long fibonacci(int n) {
    if(n < 2) {
        return n;
    }
    unsigned long long prev = 0;
    unsigned long long curr = 1;
    for(int i = 2; i < n + 1; i++) {
        int temp = curr;
        curr = curr + prev;
        prev = temp;
    }
    return curr;
}

int main() {
    int nth; 
    std::cin >> nth;
    std::cout << fibonacci(nth) << std::endl;
    return 0;
}