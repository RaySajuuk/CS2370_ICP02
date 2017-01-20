/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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