#ifndef MODIFIER_H
#define MODIFIER_H

#include "lms/module.h"
#include "lms/datamanager.h"
#include "lms/extra/time.h"

class Modifier : public lms::Module {
public:
    bool initialize() override;
    bool deinitialize() override;
    bool cycle() override;
private:
    int *ptr;
};

#endif /* MODIFIER_H */
