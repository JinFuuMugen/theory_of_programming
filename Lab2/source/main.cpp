#include <stdlib.h>
#include <istream>
#include <sstream>
#include <string>
#include "ParseVector.hpp"

int main() {
    std::cout << "Numbers input:\n" << std::endl;
    std::vector <int> intVec;
    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty())
            break;

        std::stringstream ss(line);
        int num;

        while (ss >> num) {
            intVec.push_back(num);
        }
    }
    
    ParseVector parseObj = ParseVector(intVec);

    std::ofstream outputFile("result.txt");

    if (outputFile.is_open()) {
        parseObj.ParseToStream(outputFile);
        outputFile.close();
        std::cout << "File written successfully." << std::endl;
    } else {
        std::cerr << "Error opening file." << std::endl;
    }
    system("pause");
}