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
    lms::ReadDataChannel<int> ptrIn;
    lms::ReadDataChannel<int> ptrIn2;
    lms::WriteDataChannel<int> ptrOut;
};

#endif /* FUSION_H */
