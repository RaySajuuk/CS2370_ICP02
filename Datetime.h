/*
 * CS2370 ICP02
 * @collaboration: Boran Li(em6829), Erick Ramos(rk4863), Osvaldo Arellano(yx8623)
 * Date: Jan/18/2017
 */

#ifndef CS2370_ICP02_DATETIME_H
#define CS2370_ICP02_DATETIME_H

#include <iostream>
#include "Date.h"
#include "Time.h"

using namespace std;

class Datetime : public Date, public Time {
public:
    Datetime();

    Datetime(int, int, int, int, int, int);

    void showDateTime() const;
};


#endif //CS2370_ICP02_DATETIME_H
