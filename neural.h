#include <vector>
#include "layers\layer.h"

using namespace std;

class neural{
public:
    neural();
    ~neural();
private:
    layer input_layer;
    vector<layer> hidden_layers;
    layer output_layer;
};