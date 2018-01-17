//
// Created by Harry Tech on 18-01-17.
//

#include "Toy.h"

Toy::Toy(const std::string &pName) : mName(pName) {

}

const std::string &Toy::getName() const {
    return this->mName;
}
