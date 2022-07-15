//
// Created by diego on 7/15/22.
//

#ifndef NDKTUTORIAL_STORE_H
#define NDKTUTORIAL_STORE_H

#include <cstdint>
#include "jni.h"

#define STORE_MAX_CAPACITY 16

typedef struct {
    StoreEntry mEntries[STORE_MAX_CAPACITY];
    int32_t mLength;
} Store;

#endif //NDKTUTORIAL_STORE_H
