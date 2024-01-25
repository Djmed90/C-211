#include <iostream>

#include <vector>

double calculateMean(std::vector<int> arr) {

    double sum = 0;

    for (int num : arr) {

        sum += num;

    }

    return sum / (arr.size() * 1.0);
}

double calculateMedian(std::vector<int> arr) {

    int n = arr.size();

    if (n == 0) {

        return 0;
    }

    for (int i = 0; i < n - 1; i++) {

        for (int y = 0; y < n - i - 1; y++) {

            if (arr[y] > arr[ y + 1]) {

                int temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;
            }
        }
    }

    if (n % 2 == 0) {

        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;

    } else {

        return arr[n / 2];
    }
}

int calculateMode(std::vector<int> arr) {

    int mode = 0;

    int maxFr = 0;

    for (int num : arr) {

        int frequency = 0;

        for (int otherNum : arr) {

            if (num == otherNum) {

                frequency++;
            }
        }

        if (frequency > maxFr) {

            maxFr = frequency;

            mode = num;
        }
    }

    return mode;
}

void findStats(std::vector<int> arr, double** stats) {

    *stats = new double[3];

    (*stats)[0] = calculateMean(arr);

    (*stats)[1] = calculateMedian(arr);

    (*stats)[2] = calculateMode(arr);
}

int main() {

    int n;

    std::cin >> n;

    std::vector<int> arr;

    for (int i = 0; i < n; i++) {

        int num;

        std::cin >> num;

        arr.push_back(num);
    }

    double* stats;

    findStats(arr, &stats);

    std::cout << "Mean: " << stats[0] << std::endl;

    std::cout << "Median: " << stats[1] << std::endl;

    std::cout << "Mode: " << stats[2] << std::endl;

    delete[] stats;

    return 0;
}