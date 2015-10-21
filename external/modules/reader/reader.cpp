#include "reader.h"

extern "C" {
void* getInstance () {
    return new Reader();
}
}

bool Reader::initialize() {
    ptrIn = datamanager()->readChannel<int>(this, "FUSION");

    return true;
}

bool Reader::deinitialize() {
    return true;
}

bool Reader::cycle() {
    lms::extra::PrecisionTime::fromMillis(300).sleep();

    return true;
}
