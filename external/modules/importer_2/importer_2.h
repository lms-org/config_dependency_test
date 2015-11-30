#ifndef IMPORTER_2_H
#define IMPORTER_2_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"

class Importer2 : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    lms::WriteDataChannel<int> ptr;
};

#endif /* IMPORTER_2_H */
