#pragma once

#include "..\math\matrix.hpp"
#include "..\math\active_funcs.hpp"

class layer {
private:
    matrix* m_weigth;
public:
    layer(matrix* weigth, active_funcs::type type = active_funcs::type::fsigm);
    ~layer();
    void set_random_weight();
    matrix* weigths();
};