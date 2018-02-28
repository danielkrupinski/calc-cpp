#include "../include/calc.h"

using namespace std;

void Calc::init()
{
    cout << "Calculator\n"
            "Enter operation: ";
}

Calc::data Calc::input()
{
    Calc::data data;
    cin >> data.number >> data.operation >> data.number2;
    return data;
}

void Calc::process(data data)
{
    
}
