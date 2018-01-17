//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_TOY_H
#define BASIC_FACTORY_TOY_H

#include <string>
#include "IObject.h"

class Toy : public IObject {

public:
    Toy(const std::string &pName);

public:
    const std::string &getName() const;
    virtual void prepare() const = 0;

protected:
    std::string mName;
};

#endif //BASIC_FACTORY_TOY_H
