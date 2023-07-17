#include <iostream>
int gcd(int num1, int num2) {
    if(num1 == num2) {
        return num1;
    }
    if(num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    int result = num1;
    while(num2 != 0) {
        int temp = result;
        result = num2;
        num2 = temp % num2;
    }
    return result;
}

int main() {
    int num1, num2, temp;
    std::cin >> num1;
    std::cin >> num2;
    std::cout << gcd(num1, num2) << std::endl;
    return 0;
}