#pragma once

#include "matrix.hpp"

class layer {
private:
    matrix weigth;
public:
    layer();
    ~layer();
    void set_random_weight();
};