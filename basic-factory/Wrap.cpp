//
// Created by Harry Tech on 18-01-17.
//

#include "Wrap.h"

Wrap::Wrap(int pLength, int pWidth) : mLength(pLength), mWidth(pWidth){

}

const std::pair<int, int> *Wrap::getDimension() const {
    return new std::pair<int, int>(this->mLength, this->mWidth);
}
