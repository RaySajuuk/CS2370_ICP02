//
// Created by Boran Li on 1/18/17.
//

#include <iostream>
#include "Datetime.h"

using namespace std;

/*Datetime::Datetime() : Date(), Time() {
}*/

Datetime::Datetime() {}

Datetime::Datetime(int mon, int day, int year, int hour, int min, int sec) : Date(mon, day, year),
                                                                             Time(hour, min, sec) {}

void Datetime::showDateTime() const {
    cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";
    cout << getHour() << ":" << getMin() << ":" << getSec() << " " << endl;
}

