#include <iostream>

// 1 0 0
// 0 1 0
// 0 0 1

// Need to finish/ FIx this
int main(){

    int n;
    std::cin >> n;
    int M[n][n];
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if( i == j){
                M[i][j] = 1; //   std::cout << "1";
            }
            else{
                M[i][j] << 0;  // std::cout << "0";
            }
            std::cout << " ";
        }
          std::cout << '\n';
    }
    
    return 0;
}


// One way to do

// int main(){

//     int n;
//     std::cin >> n;
//     for(int i = 0; i < n; ++i){
//         for(int j = 0; j < n; ++j){
//             if( i == j){
//                 std::cout << "1";
//             }
//             else{
//                 std::cout << "0";
//             }
//             std::cout << " ";
//         }
//           std::cout << '\n';
//     }

//     return 0;
//}