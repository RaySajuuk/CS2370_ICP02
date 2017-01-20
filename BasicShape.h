/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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
