#include "transformer.h"

extern "C" {
void* getInstance () {
    return new Transformer();
}
}

bool Transformer::initialize() {
    ptrIn = datamanager()->readChannel<int>(this, "IMPORT_1");
    ptrOut = datamanager()->writeChannel<int>(this, "TRANSFORM_1");

    return true;
}

bool Transformer::deinitialize() {
    return true;
}

bool Transformer::cycle() {
    lms::extra::PrecisionTime::fromMillis(400).sleep();

    *ptrOut = 2 * (*ptrIn);

    return true;
}
