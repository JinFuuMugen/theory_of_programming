#pragma once
#include <vector>
#include <fstream>
#include <iostream>

class ParseVector {
    private:
        std::vector <int> numericVector;
    public:
        ParseVector(std::vector<int>);
        void SetNumVector(std::vector<int>);
        std::vector<int> GetNumVector();
        void ParseToStream(std::ofstream &out);
};
