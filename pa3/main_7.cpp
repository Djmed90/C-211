// Diameter one hard do later !!

#include <iostream>
#include <cmath>
#include <vector>

double calculateDistance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    int x, y;
    std::vector<std::pair<int, int>> points;

    while (std::cin >> x >> y) {
        points.push_back(std::make_pair(x, y));
    }
    
    double diameter = 0;
    for (size_t i = 0; i < points.size(); ++i) {
        for (size_t j = i + 1; j < points.size(); ++j) {
            double distance = calculateDistance(points[i].first, points[i].second, points[j].first, points[j].second);
            diameter = std::max(diameter, distance);
        }
    }

    // Print the floor of the diameter
    std::cout << static_cast<int>(floor(diameter)) << std::endl;

    return 0;
}
