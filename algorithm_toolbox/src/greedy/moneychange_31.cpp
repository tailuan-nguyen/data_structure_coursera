#include <iostream>

int money_change(int change) {
    int result = 0;
    while(change >= 10) {
        change -= 10;
        result++;
    }
    while(change >= 5) {  
        change -= 5;
        result++;
    }
    return result + change;
}

int main() {
    int change = 0;
    std::cin >> change;
    std::cout << money_change(change) << std::endl;
    
    return 0;
}