#include "fusion.h"

extern "C" {
void* getInstance () {
    return new Fusion();
}
}

bool Fusion::initialize() {
    ptrIn = datamanager()->readChannel<int>(this, "TRANSFORM_1");
    ptrIn2 = datamanager()->readChannel<int>(this, "IMPORT_2");
    ptrOut = datamanager()->writeChannel<int>(this, "FUSION");

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
