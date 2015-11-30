#include "transformer.h"

LMS_MODULE_INTERFACE(Transformer)

bool Transformer::initialize() {
    ptrIn = readChannel<int>("IMPORT_1");
    ptrOut = writeChannel<int>("TRANSFORM_1");

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
