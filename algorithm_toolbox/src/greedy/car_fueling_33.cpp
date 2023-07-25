#include <iostream>
#include <vector>
/**
 * @brief check distance between stops, start location with first stop, finish location with last stop
 * 
 * @param stops stops location in distance
 * @param n number of stops
 * @param d distance between two cities
 * @param max max fuel can go
 * @return true if it's possible to do the trip
 * @return false if it's not possible to do the trip
 */
bool check_stops_distance(int stops[], int n, int d, int max) {
    for (int i = 1; i < n; i++) {
        if((stops[i] - stops[i-1]) > max) {
            return false;
        }
    }
    if ((d - stops[n - 1]) > max || stops[0] > max) {
        return false;
    } 
    return true;
}

/**
 * @brief calculate minimum stops the car needed to travel d distance
 * 
 * @param d distance between 2 cities
 * @param m maximum gas fuel 
 * @param n number of gas station
 * @param map array of distance location the gas stop
 * @return int minumum number of stops as the output
 */
int car_fuel(int d, int m, int n, int stops[]) {
    int ride_distance = m;

    int result = 0;
    if(check_stops_distance(stops, n, d, m)) {
        for (int i = 0; i < n; i++) {
            if(ride_distance < stops[i]) {
                result++;
                ride_distance = stops[i-1] + m;
            }
            if (ride_distance >= d) {
                return result;
            }
        }
        if (ride_distance < d) {
            return result + 1;
        }
    }
        return -1;
}

int main() {
    int d, m, n;
    std::cin >> d; 
    std::cin >> m;
    std::cin >> n;
    int stops[n];
    for (int i = 0; i < n; i++) {
        std::cin >> stops[i];
    }
    std::cout << car_fuel(d, m, n, stops) << std::endl;
}