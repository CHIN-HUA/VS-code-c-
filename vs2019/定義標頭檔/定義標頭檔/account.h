#pragma once
#ifndef accouut_H
#define account_H
#include<string>
using namespace std;


class account
{
public:
    string name;
    int income; // ���J
    int excome; //��X

    account(string _name, int _income, int _excome);


    int savings();
};

#endif // !accouut

