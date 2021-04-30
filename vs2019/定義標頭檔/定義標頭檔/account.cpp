#include "account.h"

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