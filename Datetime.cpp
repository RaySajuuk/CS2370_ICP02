/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

#include <iostream>
#include "Datetime.h"

using namespace std;

Datetime::Datetime() {}

Datetime::Datetime(int mon, int day, int year, int hour, int min, int sec) : Date(mon, day, year),
                                                                             Time(hour, min, sec) {}

void Datetime::showDateTime() const {
    cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";
    cout << getHour() << ":" << getMin() << ":" << getSec() << " " << endl;
}

