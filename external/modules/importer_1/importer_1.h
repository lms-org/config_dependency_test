#ifndef IMPORTER_1_H
#define IMPORTER_1_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"
#include "lms/type/framework_info.h"

class Importer1 : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    int *ptr;
    const lms::type::FrameworkInfo *info;
    const lms::type::ModuleConfig *config;
};

#endif /* IMPORTER_1_H */
