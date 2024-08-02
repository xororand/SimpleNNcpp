#include "layer.h"

layer::layer(matrix* weigth, active_funcs::type type) {
    m_weigth = weigth;
}
layer::~layer() {

}
matrix* layer::weigths(){ return m_weigth; }