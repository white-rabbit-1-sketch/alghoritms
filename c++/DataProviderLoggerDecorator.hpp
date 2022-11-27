#ifndef DATA_PROVIDER_LOGGER_DECORATOR_H
#define DATA_PROVIDER_LOGGER_DECORATOR_H

#include "DataProviderInterface.hpp"
#include "DataProvider.hpp"

using namespace std;

namespace alg {
    class DataProviderLoggerDecorator: public DataProviderInterface {
        protected:
            DataProviderInterface &dataProvider;

        public:
            DataProviderLoggerDecorator(DataProviderInterface &dataProvider);
            int getRandomValue() override;
    };
}

#endif