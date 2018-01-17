//
// Created by Harry Tech on 18-01-17.
//

#include <iostream>
#include "Car.h"

Car::Car(const std::string &pName, const std::string &pModele) : Toy(pName), mModele(pModele) {

}

Car::Car(const std::string &pModele) : Toy("BMW"), mModele(pModele) {

}

void Car::prepare() const {
    std::cout << "La voiture de la marque : " << this->mName << ", modèle : " << this->mModele << " est prête !" << std::endl;
}
