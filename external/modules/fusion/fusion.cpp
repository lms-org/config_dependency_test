#include "fusion.h"
#include "lms/definitions.h"

LMS_MODULE_INTERFACE(Fusion)

bool Fusion::initialize() {
    ptrIn = readChannel<int>("TRANSFORM_1");
    ptrIn2 = readChannel<int>("IMPORT_2");
    ptrOut = writeChannel<int>("FUSION");

    return true;
}

bool Fusion::deinitialize() {
    return true;
}

bool Fusion::cycle() {
    lms::extra::PrecisionTime::fromMillis(300).sleep();

    *ptrOut = *ptrIn + *ptrIn2;

    return true;
}
