#ifndef FUSION_H
#define FUSION_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"

class Fusion : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    const int *ptrIn;
    const int *ptrIn2;
    int *ptrOut;
};

#endif /* FUSION_H */
