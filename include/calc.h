#ifndef CALC_H
#define CALC_H

#include <iostream>
#include <vector>

namespace Calc {
    void init();

    struct data {
        double number, number2;
        char operation;
    };

    data input();
    double process(const data&);
    void output(const data&&);
}

#endif
