#pragma once

#include <cmath>
#include <string>
#include "Figure.hpp" 

class Prism : public Figure {
private:
    double height;
public:
    Prism(double sideLength1, double sideLength2, double sideLength3, double height):Figure(sideLength1, sideLength2, sideLength3), height(height) {}
    double GetVolume();
};