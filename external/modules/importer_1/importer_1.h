#ifndef IMPORTER_1_H
#define IMPORTER_1_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"

class Importer1 : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    lms::WriteDataChannel<int> ptr;
};

#endif /* IMPORTER_1_H */
