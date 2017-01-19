//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_CIRCLE_H
#define CS2370_ICP02_CIRCLE_H
#include "BasicShape.h"


class Circle : public BasicShape {
private:
    long centerx;
    long centery;
    double radius;
public:
    Circle(long x, long y, double rd) {
        centerx = x;
        centery = y;
        radius = rd;
        calcArea();
    }
    long getCenterx() {
        return centerx;
    }
    long getCentery() {
        return centery;
    }
    void calcArea() {
        double temp = 3.14159 * radius * radius;
        BasicShape::setArea(temp);
    }
    double getArea() {
        return BasicShape::getArea();
    }
};


#endif //CS2370_ICP02_CIRCLE_H
