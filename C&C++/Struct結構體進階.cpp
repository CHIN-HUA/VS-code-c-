#include <iostream>
#include <string>
using namespace std;

struct Name //名字
{
    char firstname[40]; //名
    char surname[40]; //姓
        
    void show()
    {
            cout << firstname << " " << surname;
    }
};

struct Date //出生年月日
{
    int year; // 年
    int month; // 月
    int day; // 日

    void show()
    {
        cout << year << "/" << month << "/" << day;
    }
};

struct Email
{
    char username[40];
    char domainname[40];

    void show()
    {
        cout << username << "@" << domainname;
    }
};

struct Human
{
    Name name;
    Date birthdate;
    Email mail;

    void show()
    {
        name.show();
        cout << endl;
        birthdate.show();
        cout << endl;
        mail.show();
        cout << endl;
    }
};

int main()
{
    Human he = {
        {"Tico", "Yen"},
        {2000, 4, 4},
        {"Hello1010", "gmail.com"}
        };

    he.show();
    
    system("pause");
    return 0;
}   