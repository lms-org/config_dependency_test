#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"

class Transformer : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    lms::ReadDataChannel<int> ptrIn;
    lms::WriteDataChannel<int> ptrOut;
};

#endif /* TRANSFORMER_H */
