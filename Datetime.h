//
// Created by Boran Li on 1/18/17.
//

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
