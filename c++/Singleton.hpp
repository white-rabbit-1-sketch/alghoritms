#ifndef SINGLETON_H
#define SINGLETON_H

namespace alg {
    class Singleton {
        protected:
            Singleton();

        public:
            static Singleton &getInstance();
            Singleton(Singleton const &value) = delete;
            void operator=(Singleton const &value) = delete;
    };
}

#endif