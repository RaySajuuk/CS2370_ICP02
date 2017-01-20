//
// Created by Boran Li on 1/18/17.
//

#include "Time.h"

Time::Time() {
    hour = 0;
    min = 0;
    sec = 0;
}

Time::Time(int h, int m, int s) {
    hour = h;
    min = m;
    sec = s;
}

int Time::getHour() const {
    return hour;
}

int Time::getMin() const {
    return min;
}

int Time::getSec() const {
    return sec;
}