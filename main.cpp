#include <iostream>
#include "neural.h" // Основной класс нейросети

using namespace std;

const int gens = 5000;

int main() {
    // 3 input XOR
    double examples[8][3] = {
        {0, 0, 0},
        {0, 0, 1},
        {0, 1, 0},
        {0, 1, 1},
        {1, 0, 0},
        {1, 0, 1},
        {1, 1, 0},
        {1, 1, 1}
    };

    double targets[8][1] = {
        {0},
        {1}, 
        {1},
        {0},
        {1},
        {0},
        {0},
        {1}
    };

    layer* l_input = new layer(new matrix(examples));
    layer* l_output = new layer(new matrix(targets));

    neural nn(l_input, l_output, gens);

    nn.add_hidded_layer(64);

    nn.train();

}