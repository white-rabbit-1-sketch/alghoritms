#ifndef SHM_STORAGE_H
#define SHM_STORAGE_H

#include <string>

using namespace std;

namespace alg {
    class ShmStorage {
        protected:
            key_t generateShmKey(string const &key) const;

        public:
            void set(string key, string value);
            bool get(string key, string &value);
    };
}

#endif