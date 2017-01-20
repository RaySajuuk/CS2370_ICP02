//
// Created by Boran Li on 1/18/17.
//

#include "Rectangle.h"

Rectangle::Rectangle(long w, long l) {
    width = w;
    length = l;
    calcArea();
}

long Rectangle::getWidth() {
    return width;
}

long Rectangle::getLength() {
    return length;
}

void Rectangle::calcArea() {
    double temp = length * width;
    BasicShape::setArea(temp);
}