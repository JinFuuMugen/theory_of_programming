#include "Sphere.hpp"

double Sphere::GetVolume(){
    double volume = (4.0 / 3.0) * 3.14159265358979323846 * (pow(measurment_0, 3));
    return volume;
}
