#include<iostream>
#include<algorithm>
#include<iomanip>
#include<utility>
#include<bits/stdc++.h>

/**
 * @brief 
 * 
 * @param list 
 * @return int 
 */
double sum_list(std::vector<double> list) {
    int result = 0;
    for (std::vector<double>::iterator it = list.begin(); it != list.end(); it++) {
        result += *it;
    }
    return result;
}

/**
 * @brief Support function, print testing correct pair
 * 
 * @param pairList 
 */
void printVectorOfPair(std::vector<std::pair<double, int>> pairList) {
    for (std::vector<std::pair<double, int>>::iterator it = pairList.begin(); it != pairList.end(); it++) {
        std::cout << (*it).first << "  " << (*it).second << std::endl;
    }
}

/**
 * @brief 
 * 
 * @param quantityList 
 * @param priceList 
 * @return std::vector<std::pair<double,int>> 
 */
std::vector<std::pair<double,int>> computeSortedPairList(const std::vector<double> quantityList, const std::vector<double> priceList) {
    std::vector<std::pair<double, int>> priceIndexAndQuantity;
    for (int i = 0; i < quantityList.size(); i++) {
        double priceIndex_temp = priceList[i] / quantityList[i];
        priceIndexAndQuantity.push_back(std::pair<double, int>(priceIndex_temp, quantityList[i]));
    }
    std::sort(priceIndexAndQuantity.rbegin(), priceIndexAndQuantity.rend());
    return priceIndexAndQuantity;
}

/**
 * @brief 
 * 
 * @param priceIndexAndQuantity 
 * @param cap 
 * @return double 
 */
double computeMaxLoot(std::vector<std::pair<double, int>> priceIndexAndQuantity, int cap) {
    int remainCap = cap;
    double value_result = 0;
    int i = 0;
    for(std::vector<std::pair<double, int>>::iterator it = priceIndexAndQuantity.begin(); it != priceIndexAndQuantity.end() && remainCap > 0; it++) {
        if((*it).second < remainCap) {
            value_result += (*it).second * (*it).first;
            remainCap -= (*it).second;
        } else {
            value_result += remainCap * (*it).first;
            remainCap = 0;
        }    
    }
    return value_result;
}

int main() {

    int n, capacity;
    std::cin >> n >> capacity;
    std::vector<double> quantityList;
    std::vector<double> priceList;
    int quantityTemp = 0, priceTemp = 0; 
    for (int i = 0; i < n; i++) {
        std::cin >> priceTemp >> quantityTemp;
        priceList.push_back(priceTemp);
        quantityList.push_back(quantityTemp);
    }

    std::cout << std::fixed << std::setprecision(4);

    // If the whole store have smaller cap than the bag -> take everything
    if(sum_list(quantityList) <= capacity) {
        std::cout << sum_list(priceList) << std::endl;
        return 0;
    }
    std::vector<std::pair<double, int>> priceIndexAndQuantity = computeSortedPairList(quantityList, priceList);
    std::cout << computeMaxLoot(priceIndexAndQuantity, capacity) << std::endl;
    return 0;
}