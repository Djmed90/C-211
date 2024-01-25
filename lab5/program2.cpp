# include <iostream>

int mystery(int a , int b , int c){
    int result = 1;
    if(a % 2 == 0){
        result = 0;
        for(int i = b; i <= c ; ++i){ result += i;}
    }
    else{
        for(int i = b; i <= c ; ++i){ result *= i;}
    }
    return result;
}

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int output = mystery(a, b, c);
    std::cout << output << std::endl;


    return 0;
}