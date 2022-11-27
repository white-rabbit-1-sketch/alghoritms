#include <iostream>
#include <cstdlib>
#include "DataProviderLoggerDecorator.hpp"

using namespace std;

namespace alg {
    DataProviderLoggerDecorator::DataProviderLoggerDecorator(DataProviderInterface &dataProvider) : dataProvider{dataProvider} 
    {
        
    }

    int DataProviderLoggerDecorator::getRandomValue()
    {
        cout << "[DataProviderLoggerDecorator::getRandomValue called] ";

        return dataProvider.getRandomValue();
    }
}