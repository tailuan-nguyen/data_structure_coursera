#include<iostream>

int lastdigit_partialsum_fibonacci(unsigned long long start, unsigned long long end) {
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
        prev += temp;
        result = (result + curr) % 10;
        index++;
    }
    return result;
}

int main() {
    while (true) {
        unsigned long long start, end;
        std::cin >> start >> end;
        std::cout << lastdigit_partialsum_fibonacci(start, end) << std::endl << std::endl;
    }
    return 0;
}