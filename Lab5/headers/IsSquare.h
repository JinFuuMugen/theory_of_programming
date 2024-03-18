#pragma once

#include <stdlib.h>
#include <math.h>

template <typename T>
class IsSquare
{
private:

public:
    bool operator()(T value)
    {
        if (value < 0)
            {
                return false;
            }
        else
        {
            double root = sqrt(value);
            return root * root == value;
        }
    };
    int GetCounts()
    {
        return this->squares_counter;
    };
};