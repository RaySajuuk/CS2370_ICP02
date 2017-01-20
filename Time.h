/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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
