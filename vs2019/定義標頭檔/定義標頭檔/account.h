#pragma once
#ifndef accouut_H
#define account_H
#include<string>
using namespace std;


class account
{
public:
    string name;
    int income; // 收入
    int excome; //支出

    account(string _name, int _income, int _excome);


    int savings();
};

#endif // !accouut

