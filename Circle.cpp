//
// Created by Boran Li on 1/18/17.
//

#include "Circle.h"

Circle::Circle(long x, long y, double rd) {
    centerx = x;
    centery = y;
    radius = rd;
    calcArea();
}

long Circle::getCenterx() {
    return centerx;
}

long Circle::getCentery() {
    return centery;
}

void Circle::calcArea() {
    double temp = 3.14159 * radius * radius;
    BasicShape::setArea(temp);
}

double Circle::getArea() {
    return BasicShape::getArea();
}