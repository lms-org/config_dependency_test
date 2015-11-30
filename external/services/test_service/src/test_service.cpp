#include "test_service.h"

bool TestService::init() {
    logger.info() << "INIT";
    return true;
}

void TestService::destroy() {
    logger.info() << "DESTROY";
}

int TestService::getTestValue() {
    //return 1234;
    return config().get<int>("test", -1);
}
