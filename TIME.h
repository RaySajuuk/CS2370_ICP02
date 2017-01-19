//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_TIME_H
#define CS2370_ICP02_TIME_H


class TIME {
protected:
    int hour;
    int min;
    int sec;
public:
    TIME() {
        hour = 0;
        min = 0;
        sec = 0;
    }

    TIME(int h, int m, int s) {
        hour = h;
        min = m;
        sec = s;
    }

    int getHour() const {
        return hour;
    }

    int getMin() const {
        return min;
    }

    int getSec() const {
        return sec;
    }
};


#endif //CS2370_ICP02_TIME_H
