#include "importer_2.h"

extern "C" {
void* getInstance () {
    return new Importer2();
}
}

bool Importer2::initialize() {
    ptr = datamanager()->writeChannel<int>(this, "IMPORT_2");

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
