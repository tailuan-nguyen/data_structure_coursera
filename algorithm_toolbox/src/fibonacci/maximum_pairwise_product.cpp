#include<iostream>
int main() {
    int size;
    std::cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    long long big_num1 = 0, big_num2 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > big_num1) {
            big_num2 = big_num1;
            big_num1 = arr[i];
        } else if (arr[i] > big_num2) {
            big_num2 = arr[i];
        }
    }
    long long result;
    result = big_num1 * big_num2;
    std::cout << result << std::endl;
    return 0;
}