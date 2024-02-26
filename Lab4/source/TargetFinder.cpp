#include "TargetFinder.h"

template <typename T>
bool TargetFinder<T>::operator()(const T& element) {
    return this->target == element;
}