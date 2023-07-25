#include <iostream>
#include <cmath>

int list_sum(int list[]) {
    
}

/**
 * @brief Distinct Summannds Problem
 * Represent a positive integer as the sum of the maximum number
 * of pairwise distinct positive integers
 * @param n the integer
 * @return int maximum distinct positive integers that sum to n
 */
int computeMaxDistinctElements(long n) {
    int num_component = (-1 + std::sqrt(1+8*n)) / 2;
    int component[num_component];
    // Inititial all components 
    for(int i = 0; i < num_component; i++) {
        component[i] = 0;
    }
    for(int i = 1; i < num_component; i++) {
        for (int i = )
    }

}

int main() {
    long n;
    std::cin >> n;
    std::cout << computeMaxDistinctElements(n) << std::endl;
}