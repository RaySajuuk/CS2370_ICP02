//
// Created by Boran Li on 1/18/17.
//

#ifndef CS2370_ICP02_DATETIME_H
#define CS2370_ICP02_DATETIME_H

#include <iostream>
#include "DATE.h"
#include "TIME.h"
using namespace std;

class DateTime : public DATE, public TIME {
public:
    DateTime();
    DateTime(int, int, int, int, int, int);
    void showDateTime()const;
};


#endif //CS2370_ICP02_DATETIME_H
