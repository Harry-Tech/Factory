#include <iostream>
#include <vector>
#include "Factory.h"

int main() {
    std::cout << "Welcome to the Santa Claus's Factory" << std::endl;

    Factory factory;
    std::vector<IObject *> objects;

    objects.push_back(factory.produceObject("Car", "Mercedes"));
    objects.push_back(factory.produceObject("Car"));
    objects.push_back(factory.produceObject("Plane", "Mirage"));
    objects.push_back(factory.produceObject("Plane"));
    factory.produceObject("");

    std::cout << "We just created " << objects.size() << " objects" << std::endl;

    return 0;
}