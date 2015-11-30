#ifndef READER_H
#define READER_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"
#include "lms/data_channel.h"

class Reader : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    lms::ReadDataChannel<int> ptrIn;
};

#endif /* READER_H */
