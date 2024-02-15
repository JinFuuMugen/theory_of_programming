#include "Prism.hpp"

double Prism::GetVolume(){
    if (measurment_0 <= 0 || measurment_1 <= 0 || measurment_2 <= 0) {
        return 0.0;
    }
    double p = (measurment_0 + measurment_1 + measurment_2) / 2;
    double volume = height * sqrt(p * (p - measurment_0) * (p - measurment_1) * (p - measurment_2));
    if (std::isnan(volume)) {
        return 0.0;
    }
    return volume;
}
