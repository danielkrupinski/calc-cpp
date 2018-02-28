#ifndef CALC_H
#define CALC_H

#include <iostream>
#include <vector>

namespace Calc {
    void init();

    struct input {
        double number, number2;
        char operation;
    };
    
    double input();
}

#endif
