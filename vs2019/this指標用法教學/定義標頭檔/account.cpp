#include "account.h"

account::account()
{
    name = "No name";
    income = 0;
    excome = 0;
}
account::account(string _name, int _income, int _excome)
{
    name = _name;
    income = _income;
    excome = _excome;
}

int account::savings()
{
    return income - excome;
}

string account::Name()
{
    return name;
}

int account::Income()
{
    return income;
}

int account::comparSavings(account& other)
{
    int first = this->savings();
    int second = other.savings();
    return first - second;
}
