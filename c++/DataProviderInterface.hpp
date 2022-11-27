#ifndef DATA_PROVIDER_INTERFACE_H
#define DATA_PROVIDER_INTERFACE_H

using namespace std;

namespace alg {
    class DataProviderInterface {
        public:
            virtual int getRandomValue() = 0;
    };
}

#endif