/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

#include "Date.h"
Date::Date() {
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

int Date::getDay() const {
    return day;
}

int Date::getMonth() const {
    return month;
}

int Date::getYear() const {
    return year;
}