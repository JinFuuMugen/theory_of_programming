#pragma once

#include <string>
#include "Figure.hpp"
#include <math.h>


class Sphere : public Figure {
public:
    Sphere(double radius):Figure(radius, 0, 0){}
    double GetVolume();
};