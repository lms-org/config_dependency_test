#include "reader.h"

LMS_MODULE_INTERFACE(Reader)

bool Reader::initialize() {
    ptrIn = readChannel<int>("FUSION");

    return true;
}

bool Reader::deinitialize() {
    return true;
}

bool Reader::cycle() {
    lms::extra::PrecisionTime::fromMillis(300).sleep();

    return true;
}
