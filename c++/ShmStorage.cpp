#include <sys/ipc.h>
#include <sys/shm.h>
#include <cstring>
#include "ShmStorage.hpp"
#include <iostream>

const int PROJECT_ID = 65;

namespace alg {
    void ShmStorage::set(string key, string value)
    {
        int shmid = shmget(this->generateShmKey(key), 1024, 0666|IPC_CREAT);
  
        char *str = (char*) shmat(shmid, nullptr, 0);

        strcpy(str, value.data());
    }

    bool ShmStorage::get(string key, string &value)
    {
        int shmid = shmget(this->generateShmKey(key), 1024, 0666|IPC_CREAT);
  
        char *str = (char*) shmat(shmid, nullptr, 0);

        value = str;

        return true;
    }

    key_t ShmStorage::generateShmKey(string const &key) const
    {
        key_t tKey = 0;

        for (char const &c: key) {
            tKey += c;
        }

        return tKey;
    }
}