//
// Created by Harry Tech on 18-01-17.
//

#include <iostream>
#include "Plane.h"

Plane::Plane(const std::string &pName, int pFireRate) : Toy(pName), mFireRate(pFireRate) {

}

Plane::Plane(int pFireRate) : Toy("Xwing"), mFireRate(pFireRate) {

}

void Plane::prepare() const {
    std::cout << "L'avion de la marque : " << this->mName << ", avec une cadence de tir de " << this->mFireRate << " est prêt !" << std::endl;
}
