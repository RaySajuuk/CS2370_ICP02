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
    Circle(long x, long y, double rd);

    long getCenterx();

    long getCentery();

    void calcArea();

    double getArea();
};


#endif //CS2370_ICP02_CIRCLE_H
