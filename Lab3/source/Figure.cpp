#include "Figure.hpp"

Figure::Figure(double measurment_0, double measurment_1, double measurment_2){
    this->measurment_0 = measurment_0;
    this->measurment_1 = measurment_1;
    this->measurment_2 = measurment_2;
}

std::string Figure::ShowName(){
    return typeid(*this).name();
}