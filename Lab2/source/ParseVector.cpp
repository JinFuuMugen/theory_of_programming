#include "ParseVector.hpp"

ParseVector::ParseVector(std::vector<int> numVec){
    this->numericVector = numVec;
}

void ParseVector::SetNumVector(std::vector<int> numVec){
    this->numericVector = numVec;
}

std::vector<int> ParseVector::GetNumVector(){
    return this->numericVector;
}

void ParseVector::ParseToStream(std::ofstream &out){
    for (int value : this->numericVector){
        if (value < 0){
            out << value << "\n";
        }
    }
    for (int value : this->numericVector){
        if (value > 0) {
            out << value << "\n";
        }
    }
    out << std::endl;
    out.close();
}