#include <iostream>
int main() {
    int num1, num2, temp;
    std::cin >> num1;
    std::cin >> num2;
    while(num2 != 0) {
        std::cout << "LOOP A : num1: " << num1 << " num2: " << num2 << std::endl;
        temp = num1;
        num1 = num2;
        num2 = temp % num2;
        std::cout << "LOOP B : num1: " << num1 << " num2: " << num2 << std::endl << std::endl;
    }
    std::cout << num1 << std::endl;
    return 0;
}