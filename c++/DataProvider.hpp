#ifndef DATA_PROVIDER_H
#define DATA_PROVIDER_H

#include "DataProviderInterface.hpp"

using namespace std;

namespace alg {
    class DataProvider: public DataProviderInterface {
        public:
            int getRandomValue() override;
    };
}

#endif