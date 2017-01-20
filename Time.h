//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_TIME_H
#define CS2370_ICP02_TIME_H


class Time {
protected:
    int hour;
    int min;
    int sec;
public:
    Time();

    Time(int h, int m, int s);

    int getHour() const;

    int getMin() const;

    int getSec() const;
};


#endif //CS2370_ICP02_TIME_H
