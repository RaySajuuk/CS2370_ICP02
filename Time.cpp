/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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