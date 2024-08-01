#include <vector>
#include "layers\layer.h"

using namespace std;

class neural{
public:
    neural();
    ~neural();
private:
    vector<layer> layers;
};