#include "importer_1.h"
#include "lms/service_handle.h"
#include "test_service.h"

LMS_MODULE_INTERFACE(Importer1)

bool Importer1::initialize() {
    ptr = writeChannel<int>("IMPORT_1");

    return true;
}

bool Importer1::deinitialize() {
    logger.info() << "MOD_DEINIT";
    return true;
}

bool Importer1::cycle() {
    lms::extra::PrecisionTime::fromMillis(1000).sleep();

    (*ptr) ++;

    logger.info("test") << config().get<int>("test");

    logger.info("iteration") << cycleCounter();

    {
        TestService *service = getUnsafeService<TestService>("test_service");
        if(service != nullptr) {
            logger.info("service") << service->getTestValue();
        } else {
            logger.error("service") << "getService failed";
        }
    }

    return true;
}
