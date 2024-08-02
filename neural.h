#pragma once

#include <vector>
#include "layers\layer.h"

using namespace std;

class neural{
public:
    neural(layer* inputs, layer* outputs, int epoches);
    ~neural();
    void train();
    void add_hidded_layer(int n_count);
private:
    layer* input_layer;
    vector<layer*> hidden_layers;
    layer* output_layer;

    int m_epoches = 0;

    matrix hidden_activations;
	matrix output_activations;
	matrix hidden_errors;
};