#include<iostream>
#include<string>
using namespace std;

class account 
{
public:
    string name;
    int income; // 收入
    int excome; //支出

    account(string N, int I, int E)
    {
        name = N;
        income = I;
        excome = E;
    }

    int savings()
    {
        return income - excome;
    }
};

int main()
{
    //account boy = {"Tico Yen", 80000, 45000};

    account boy("Tico Yen", 80000, 45000);

    cout << boy.name << " has " << boy.savings() << " dollar\n";

    system("pause");
    return 0;
}