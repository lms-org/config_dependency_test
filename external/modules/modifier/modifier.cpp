#include "modifier.h"

extern "C" {
void* getInstance () {
    return new Modifier();
}
}

bool Modifier::initialize() {
    ptr = datamanager()->writeChannel<int>(this, "FUSION");

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
