//
// Created by diego on 7/15/22.
//

#ifndef NDKTUTORIAL_STOREUTIL_H
#define NDKTUTORIAL_STOREUTIL_H

#include <jni.h>
#include "Store.h"

bool isEntryValid(JNIEnv* pEnv, StoreEntry* pEntry, StoreType pType);

StoreEntry* allocateEntry(JNIEnv* pEnv, Store* pStore, jstring pKey);

StoreEntry* findEntry(JNIEnv* pEnv, Store* pStore, jstring pKey);

void releaseEntryValue(JNIEnv* pEnv, StoreEntry* pEntry);

void throwNoKeyException(JNIEnv* pEnv);

#endif //NDKTUTORIAL_STOREUTIL_H
