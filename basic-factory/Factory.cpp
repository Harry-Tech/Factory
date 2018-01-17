//
// Created by Harry Tech on 18-01-17.
//

#include <iostream>
#include "Factory.h"
#include "Toys/Car.h"
#include "Toys/Plane.h"

IObject* Factory::produceObject(const std::string &pObjectName, const std::string &pName) const {
    IObject *newObject = nullptr;

    if (pObjectName == "Car") {
        newObject = static_cast<IObject*>(new Car(pName, "Serie A"));
    } else if (pObjectName == "Plane") {
        newObject = static_cast<IObject*>(new Plane(pName, 2));
    } else {
        std::cerr << "Try an another type, the type "  << pObjectName << " is unknown." << std::endl;
    }

    if (newObject)
        newObject->prepare();

    return newObject;
}

IObject* Factory::produceObject(const std::string &pObjectName) const {
    IObject *newObject = nullptr;

    if (pObjectName == "Car") {
        newObject = static_cast<IObject*>(new Car("Serie A"));
    } else if (pObjectName == "Plane") {
        newObject = static_cast<IObject*>(new Plane(2));
    } else {
        std::cerr << "Try an another type, the type "  << pObjectName << " is unknown." << std::endl;
    }

    if (newObject)
        newObject->prepare();

    return newObject;
}
