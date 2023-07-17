#include<iostream>

int fibonacci_lastdigit_partialsum(unsigned long long start, unsigned long long end) {
    int result = 0;
    int prev = 0, curr = 1;
    int index = 2;
    while(index < start) {
        int temp = curr;
        curr = (curr + prev) % 10;
        prev = temp;
        index++;
    }
    while(index < end + 1) { 
        int temp = curr;
        curr = (curr + prev) % 10;
        prev = temp;
        result = result + curr;
        index++;
    }
    return result % 10;
}

int main() {
    unsigned long long start, end;
    std::cin >> start >> end;
    std::cout << fibonacci_lastdigit_partialsum(start, end) << std::endl;
    return 0;
}