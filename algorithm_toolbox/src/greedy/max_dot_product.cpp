#include <iostream>
#include <algorithm>

long long calculate_max_dot_product(int first[], int second[], int n) {
    std::sort(first, first + n);
    std::sort(second, second + n);
    long long result = 0;
    for (int i = 0; i < n; i++) {
        result += first[i] * second[i];
    }
    return result;
}

int main() {
    int n;
    int first_vector[n];
    int second_vector[n];
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> first_vector[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> second_vector[i];
    }
    std::cout << calculate_max_dot_product(first_vector, second_vector, n) << std::endl;
}