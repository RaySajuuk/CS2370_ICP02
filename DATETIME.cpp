//
// Created by Boran Li on 1/18/17.
//

#include <iostream>
#include "DATETIME.h"

using namespace std;

DateTime::DateTime() : DATE(), TIME() {
}
DateTime::DateTime(int mon, int day, int year, int hour, int min, int sec) : DATE(mon, day, year), TIME(hour, min, sec){}

void DateTime::showDateTime()const {
    cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";
    cout << getHour() << ":" << getMin() << ":" << getSec() << " " << endl;
}

