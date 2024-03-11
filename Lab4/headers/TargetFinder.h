#include <functional>
#pragma once

template<typename T>
class TargetFinder {
public:
    T target;
    TargetFinder(const T& target) : target(target) {};
    bool operator() (const T& element){
        return this->target == element;
    };
};