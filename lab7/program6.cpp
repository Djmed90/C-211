#include <iostream>
const int arrSize = 4;

void fillArray(int arr[][arrSize]);
void printArray(int arr[][arrSize]);
void studentAvgs(int arr[][arrSize]);
void examAvgs(int arr[][arrSize]);

int main()
{
	int myArr[arrSize][arrSize];
	fillArray(myArr);
	printArray(myArr);
    studentAvgs(myArr);
    examAvgs(myArr);
}

void fillArray(int arr[][arrSize]) {
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
            arr[i][j] = i+1;
            if(j >= 1){
                int d;
            std::cin >> d;
			arr[i][j] = d;
            }
		}
	}
}

void printArray(int arr[][arrSize]) {
	for (int i = 0; i < arrSize; i++) {
		for (int j = 0; j < arrSize; j++) {
			std::cout << arr[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

void studentAvgs(int arr[][arrSize]){
    // for student AVG
    for(int i = 0; i < arrSize; i++){
        int sum = 0;
        for(int j = 1; j < arrSize; j++){
            sum += arr[i][j];
        }
        double avg = sum / 3;
        std::cout << "Student " << arr[i][0] << " avg = " << avg << std::endl;
    }
}
void examAvgs(int arr[][arrSize]){
    // for exam AVG
    for(int j = 1; j < arrSize; j++){
        int sum = 0;
        for(int i = 0; i < arrSize; i++){
            sum += arr[i][j];
        }
        double avg = sum / 4;
        std::cout << "exam " << arr[j - 1][0] << " avg = " << avg << std::endl;
    }
}