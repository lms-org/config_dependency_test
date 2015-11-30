#include "modifier.h"

LMS_MODULE_INTERFACE(Modifier)

bool Modifier::initialize() {
    ptr = writeChannel<int>("FUSION");

    return true;
}

bool Modifier::deinitialize() {
    return true;
}

bool Modifier::cycle() {
    lms::extra::PrecisionTime::fromMillis(300).sleep();

    *ptr = 1 + *ptr;

    return true;
}
