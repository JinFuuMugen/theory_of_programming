#pragma once

#include <typeinfo>
#include <string>

class Figure {
    protected:
        double measurment_0;
        double measurment_1;
        double measurment_2;
    public:
        Figure(double, double, double);
        std::string ShowName();
        virtual double GetVolume(){};
};