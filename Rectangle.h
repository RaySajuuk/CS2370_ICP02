//
// Created by Boran Li on 1/18/17.
//

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
