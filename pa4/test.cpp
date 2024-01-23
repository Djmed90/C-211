#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

struct Point {
    double x, y;
    char label;
};

double euclidean_distance(const Point& p1, const Point& p2) {
    return std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
}

char classify_point(const std::vector<Point>& training_data, const Point& unknown, int k) {
    // Distance calculation
    std::vector<std::pair<double, char>> distances_and_labels;
    for (const auto& point : training_data) {
        double distance = euclidean_distance(unknown, point);
        distances_and_labels.push_back({distance, point.label});
    }

    std::sort(distances_and_labels.begin(), distances_and_labels.end());

    // Labels
    int count_R = 0, count_B = 0;
    for (int i = 0; i < k; ++i) {
        if (distances_and_labels[i].second == 'R') {
            ++count_R;
        } else {
            ++count_B;
        }
    }

    return (count_R > count_B) ? 'R' : 'B';
}

int main() {
    int n, k;
    std::cin >> n >> k;

    std::vector<Point> training_data(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> training_data[i].x >> training_data[i].y >> training_data[i].label;
    }

    Point unknown;
    std::cin >> unknown.x >> unknown.y;

    // Classify the unknown point
    char classification = classify_point(training_data, unknown, k);

    // Output the result
    std::cout << "Classified as: " << classification << std::endl;

    return 0;
}
