#ifndef TEST_SERVICE_H
#define TEST_SERVICE_H

#include <lms/service.h>

/**
 * @brief LMS service test_service
 **/
class TestService : public lms::Service {
public:
    TestService() {}

    bool init() override;
    void destroy() override;

    int getTestValue();
};

#endif // TEST_SERVICE_H
