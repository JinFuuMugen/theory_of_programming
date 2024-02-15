#pragma once

#include <cmath>
#include <string>
#include "Figure.hpp" 
class TruncatedPyramid : public Figure {

public:
    TruncatedPyramid(double baseLength, double topLength, double height):Figure(baseLength, topLength, height) {}
    double GetVolume();
};