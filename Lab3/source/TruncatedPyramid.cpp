#include "TruncatedPyramid.hpp"

double TruncatedPyramid::GetVolume(){
    return measurment_2 * (measurment_0 * measurment_0 + measurment_0 * measurment_1 + measurment_1 * measurment_1) / 3;
}