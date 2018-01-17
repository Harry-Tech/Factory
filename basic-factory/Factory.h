//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_FACTORY_H
#define BASIC_FACTORY_FACTORY_H

#include <string>
#include "IObject.h"

class Factory {

    public:
        IObject* produceObject(const std::string &pObjectName, const std::string &pName) const;
        IObject* produceObject(const std::string &pObjectName) const;

    };

#endif //BASIC_FACTORY_FACTORY_H
