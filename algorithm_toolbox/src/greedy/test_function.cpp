#include <iostream>
#include <vector>

void print_vector(std::vector<int> vect) {
    for(int i = 0; i < 10; i++) {
        std::cout << vect[i] << std::endl;
    }
}

int main() {
    std::vector<int> vect;
    for (int i = 0; i < 10; i++) {
        vect.push_back(i);
    }
    print_vector(vect);
}