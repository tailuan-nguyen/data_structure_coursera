#include<iostream>

/**
 * @brief brute force algo, check all possible number
 * 
 * @return int 
 */
int main() {
    int num1, num2, result;
    std::cin >> num1;
    std::cin >> num2;
    int size_check = std::min(num1, num2);
    for(int i = 0; i < size_check + 1; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            result = i;
        }
    }
    std::cout << result << std::endl;
    return 0;
}