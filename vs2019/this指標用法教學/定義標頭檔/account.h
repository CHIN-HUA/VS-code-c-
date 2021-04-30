#pragma once
#ifndef accouut_H
#define account_H
#include<string>
using namespace std;


class account
{
public:
    account();
    account(string _name, int _income, int _excome);
    int savings();
    string Name();
    int Income();
    int comparSavings(account& other);
private:
    string name;
    int income; // 收入
    int excome; //支出
};

#endif // !accouut

