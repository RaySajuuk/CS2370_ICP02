//
// Created by Boran Li on 1/18/17.
//

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