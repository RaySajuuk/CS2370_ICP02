/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

#ifndef CS2370_ICP02_RECTANGLE_H
#define CS2370_ICP02_RECTANGLE_H

#include "BasicShape.h"

class Rectangle : public BasicShape {
private:
    long width;
    long length;
public:
    Rectangle(long w, long l);

    long getWidth();

    long getLength();

    void calcArea();
};


#endif //CS2370_ICP02_RECTANGLE_H
