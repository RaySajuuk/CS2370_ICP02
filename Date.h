/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

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
