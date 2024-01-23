#include <iostream>
#include <string>

std::string hexTrans(int value){
    const std::string hexNumbers = "0123456789ABCDEF";
    std::string hexValue = "";

    int firstDigit = value / 16;
    int secondDigit = value % 16;

    hexValue += hexNumbers[firstDigit];
    hexValue += hexNumbers[secondDigit];

    return hexValue;
}

int main(){

    int r, g, b;

    std::cin >> r >> g >> b;

    std::string hexR = hexTrans(r);
    std::string hexG = hexTrans(g);
    std::string hexB = hexTrans(b);

    std::string HexdecimalYay = hexR + hexG + hexB;

    std::cout << "#" << HexdecimalYay << std::endl;




    return 0 ;
}