#include <iostream>
#include <array>
#include <algorithm>

double max_loot(const int listCompounds[], const int priceCompounds[], const int capacity) {
    const int size = sizeof(listCompounds); 
    std::array<double,size> priceIndex; 
    for (int i = 0; i < size; i++) {
        priceIndex[i] = (double)listCompounds[i] / (double)priceCompounds[i];
    }
    std::sort(priceIndex.begin(), priceIndex.end());
    
}

int main() {
    int compounds, capacity;
    std::cin >> compounds >> capacity;
    int listCompounds[compounds];
    int priceCompounds[compounds];
    std::cout << max_loot(listCompounds, priceCompounds, capacity);
    return 0;
}