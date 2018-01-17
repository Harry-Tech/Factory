//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_WRAP_H
#define BASIC_FACTORY_WRAP_H

#include <string>
#include "IObject.h"

class Wrap : public IObject {

public:
    Wrap(int pLength, int pWidth);

public:
    const std::pair<int, int> *getDimension() const;
    virtual void prepare() const = 0;

protected:
    int     mLength;
    int     mWidth;
};

#endif //BASIC_FACTORY_WRAP_H
