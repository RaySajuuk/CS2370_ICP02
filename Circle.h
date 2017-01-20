/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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
