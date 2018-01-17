//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_IOBJECT_H
#define BASIC_FACTORY_IOBJECT_H

class IObject {

public:
    virtual void prepare() const = 0;
};

#endif //BASIC_FACTORY_IOBJECT_H
