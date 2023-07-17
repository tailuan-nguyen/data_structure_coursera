#include<iostream>

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

unsigned long long lcm(unsigned long long num1, unsigned long long num2) {
    unsigned long long gcm_num = gcd(num1, num2);
    return (num1 * num2) / gcm_num;
}

int main() {
    unsigned long long num1, num2;
    std::cin >> num1 >> num2;
    std::cout << lcm(num1, num2) << std::endl;
    return 0;
}