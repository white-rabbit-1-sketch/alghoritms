#include "Singleton.hpp"

namespace alg {
    Singleton::Singleton()
    {
        
    }

    Singleton &Singleton::getInstance()
    {
        static Singleton instance;

        return instance;
    }
}