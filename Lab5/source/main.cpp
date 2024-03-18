#include <iostream>
#include <vector>
#include <algorithm>

#include "IsSquare.h"

struct SGP
{
    int prod;
    int counter;
};

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cerr << "usage: provide int vector space-sepparated" << std::endl;
        return -1;
    }

    std::vector<int> numeric_vector;

    try
    {

        for (int i = 1; i < argc; i++)
        {
            numeric_vector.push_back(std::stoi(argv[i]));
        }

      

        SGP sgp = SGP{
            prod :
                1,
            counter :
                0,
        };

        std::for_each(numeric_vector.begin(), numeric_vector.end(),
                      [&sgp](int n)
                      {
                          IsSquare<int> square_checker;
                          if (square_checker(n))
                          {
                            sgp.prod *= n;
                            sgp.counter ++;
                          }
                      });
        
        std::cout << "Geometry mean of provided vector is: " << pow(sgp.prod, 1.0 / sgp.counter) << std::endl;
    }
    catch (...)
    {
        std::cerr << "error ocured" << std::endl;
    }
}