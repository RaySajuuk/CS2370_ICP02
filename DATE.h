//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_DATE_H
#define CS2370_ICP02_DATE_H


class DATE {
protected:
    int month;
    int day;
    int year;
public:
    DATE() {
        month = 1;
        day = 1;
        year = 1900;
    }
    DATE(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }
    int getDay()const {
        return day;
    }
    int getMonth()const{
        return month;
    }
    int getYear()const {
        return year;
    }
};


#endif //CS2370_ICP02_DATE_H
