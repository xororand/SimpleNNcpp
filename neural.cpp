#include "neural.h"

neural::neural(layer* inputs, layer* outputs, int epoches) {
    input_layer = inputs;
    output_layer = outputs;
    
    m_epoches = epoches;
}
neural::~neural() {

}

void neural::add_hidded_layer(int n_count){
    matrix* new_matrix;
    if(hidden_layers.size() == 0)   new_matrix = new matrix(input_layer->weigths()->rows(), n_count);
    else                            new_matrix = new matrix(hidden_layers[n_count, hidden_layers.size()]->weigths()->rows());

    layer* new_layer = new layer(new_matrix);

    hidden_layers.push_back(new_layer);
}

void neural::train(){
    int start_time_all = clock();

    for (int gen = 1; gen <= m_epoches; gen++) {
    
        
    
    }
    
    int finish_time_all = clock();
    printf("Обучение завершено за %i мс\n",(finish_time_all - start_time_all));
}