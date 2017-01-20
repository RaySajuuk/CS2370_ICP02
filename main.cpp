/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Datetime.h"

using namespace std;

int main() {
    long x, y, length, width;
    double rd;

    cout << "Enter X coordinate and circles center: " << endl;
    cin >> x;
    cout << "Enter Y coordinate and circles center: " << endl;
    cin >> y;
    cout << "Enter Radius coordinate and circles center: " << endl;
    cin >> rd;

    Circle c(x, y, rd);
    cout << "The area of the circle is: " << c.getArea() << ". " << endl;

    cout << " Enter Length of rectangle" << endl;
    cin >> length;
    cout << " Enter Width of rectangle" << endl;
    cin >> width;

    Rectangle r(width, length);
    cout << "the area of the rectangle is : " << r.getArea() << endl;

    Datetime emptyDay;
    emptyDay.showDateTime();

    Datetime pastDay(13, 4, 1990, 5, 32, 27);
    pastDay.showDateTime();

    return 0;
}