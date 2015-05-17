#include "importer_1.h"

extern "C" {
void* getInstance () {
    return new Importer1();
}
}

bool Importer1::initialize() {
    ptr = datamanager()->writeChannel<int>(this, "IMPORT_1");
    info = datamanager()->readChannel<lms::type::FrameworkInfo>(this, "FRAMEWORK_INFO");
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

    logger.info("iteration") << info->cycleIteration();

    for(const lms::type::FrameworkInfo::ModuleMeasurement &measurement : info->getProfiling()) {
        logger.info() << measurement.module << " " << (measurement.end - measurement.begin);
    }

    return true;
}
