#include <iostream>
#include <string>

class Point{
    private:
        int x;
        int y;
        int z;
    public:
        Point(); // Default constructor
        Point(int someX, int someY,int someZ); // Param constructor

        void setX(int someX);
        void setY(int someY);
        void setz(int someZ);

        int getX();
        int getY();
        int getZ();

        std::string toCord();

        double euDistance (Point p2);
};