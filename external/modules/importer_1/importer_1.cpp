#include "importer_1.h"

extern "C" {
void* getInstance () {
    return new Importer1();
}
}

bool Importer1::initialize() {
    ptr = datamanager()->writeChannel<int>(this, "IMPORT_1");
    config = getConfig();

    return true;
}

bool Importer1::deinitialize() {
    return true;
}

bool Importer1::cycle() {
    lms::extra::PrecisionTime::fromMillis(1000).sleep();

    (*ptr) ++;

    logger.info("test") << config->get<int>("test");

    logger.info("iteration") << cycleCounter();

    return true;
}
