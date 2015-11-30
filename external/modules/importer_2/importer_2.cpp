#include "importer_2.h"

LMS_MODULE_INTERFACE(Importer2)

bool Importer2::initialize() {
    ptr = writeChannel<int>("IMPORT_2");

    return true;
}

bool Importer2::deinitialize() {
    return true;
}

bool Importer2::cycle() {
    lms::extra::PrecisionTime::fromMillis(1000).sleep();

    (*ptr) ++;

    return true;
}
