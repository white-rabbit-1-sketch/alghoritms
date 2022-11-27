#include <cstdlib>
#include "DataProvider.hpp"

using namespace std;

namespace alg {
    int DataProvider::getRandomValue()
    {
        return rand();
    }
}