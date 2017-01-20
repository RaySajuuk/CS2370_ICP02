//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_BASICSHAPE_H
#define CS2370_ICP02_BASICSHAPE_H


class BasicShape {
private:
    double area;
public:
    double getArea();

    virtual void calcArea() = 0;

    void setArea(double a);
};


#endif //CS2370_ICP02_BASICSHAPE_H
