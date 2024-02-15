#include <stdlib.h>
#include <iostream>
#include <string>
#include <ctime>
#include "Sphere.hpp"
#include "TruncatedPyramid.hpp"
#include "Prism.hpp"


Figure* GenerateRandomFigure() {
    int randomType = std::rand() % 3;

    double param1 = std::rand() % 10 + 1;
    double param2 = std::rand() % 10 + 1;
    double param3 = std::rand() % 10 + 1;

    std::cout << param1 << "\t" << param2 << "\t" << param3 << std::endl;
    switch (randomType) {
        case 0:
            return new TruncatedPyramid(param1, param2, param3);
        case 1:
            return new Prism(param1, param2, param3, param1 + param2 + param3);
        case 2:
            return new Sphere(param1);
        default:
            return nullptr;
    }
}

int main() {
    for (int i = 0; i < 15; i++){
        Figure* randomFigure = GenerateRandomFigure();
        if (randomFigure != nullptr) {
            std::cout << "Generated: " << randomFigure->ShowName() << std::endl;
            std::cout << "Volume: " << randomFigure->GetVolume() << "\n" << std::endl;
            delete randomFigure;
        } else {
            std::cerr << "Error while generating" << std::endl;
        }
    }
    system("pause");
    return 0;
}