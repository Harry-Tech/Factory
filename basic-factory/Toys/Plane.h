//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_PLANE_H
#define BASIC_FACTORY_PLANE_H

#include "../Toy.h"

class Plane : public Toy {

public:
    Plane(const std::string &pName, int pFireRate);
    Plane(int pFireRate);

public:
    void prepare() const override ;

private:
    int         mFireRate;
};

#endif //BASIC_FACTORY_PLANE_H
