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

double Calc::process(const data& data)
{
    switch (data.operation)
    {
        case '+':
            return data.number+data.number2;
            break;
        case '-':
            return data.number-data.number2;
            break;
        case '*':
            return data.number*data.number2;
            break;
        case '/':
            return data.number/data.number2;
            break;
    }
}

void Calc::output(data&& data)
{
    cout << data.number << ' '
         << data.operation << ' '
         << data.number2 << " = "
         << process(data) << '\n';
}
