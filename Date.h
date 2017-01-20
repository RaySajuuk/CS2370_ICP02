//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_DATE_H
#define CS2370_ICP02_DATE_H


class Date {
protected:
    int month;
    int day;
    int year;
public:
    Date();

    Date(int m, int d, int y);

    int getDay() const;

    int getMonth() const;

    int getYear() const;
};


#endif //CS2370_ICP02_DATE_H
