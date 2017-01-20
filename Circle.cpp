/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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