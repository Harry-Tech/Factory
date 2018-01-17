//
// Created by Harry Tech on 18-01-17.
//

#ifndef BASIC_FACTORY_CAR_H
#define BASIC_FACTORY_CAR_H

#include "../Toy.h"

class Car : public Toy {

public:
    Car(const std::string &pName, const std::string &pModele);
    Car(const std::string &pModele);

public:
    void prepare() const override;

private:
    std::string mModele;
};

#endif //BASIC_FACTORY_CAR_H
