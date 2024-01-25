#include <iostream>
#include <iomanip>
#include <cmath>

int main(){
    double x , x2 , y , y2;

    std::cin >> x >> y;
    std::cin >> x2 >> y2;



    double length_v1 = sqrt(x * x + y * y);
    double length_v2 = sqrt(x2 * x2 + y2 * y2);

    double normalizedX1 = x / length_v1;
    double normalizedY1 = y / length_v1;
    double normalizedX2 = x2 / length_v2;
    double normalizedY2 = y2 / length_v2;

    double dotprod = normalizedX1 * normalizedX2 + normalizedY1 * normalizedY2;

    std::string angle;
    if(dotprod == 0){angle = "Perpendicular";}
    else if(dotprod > 0){angle = "Acute";}
    else{angle = "Obtuse";}

    std::cout << std::fixed << std::setprecision(4) <<  "Length of v1: " << length_v1 << std::endl;
    std::cout << std::fixed << std::setprecision(4) << "Length of v2: " << length_v2 << std::endl;
    std::cout << std::fixed << std::setprecision(4) << "Their normalized dot product is " << dotprod << " and they are " << angle << std::endl;

}
