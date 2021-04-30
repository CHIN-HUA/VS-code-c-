#include <iostream>
using namespace std;

struct Sheep
    {
        char name[20];
        char colour[20];
        int age;

        int born();
    };

int Sheep::born()
{
    return 2021 - age;
}

int main()
{
    Sheep species[4] = {
        {"meme", "green", 5},
        {"Smallme", "white", 4},
        {"meamea", "Pink", 6},
        {"mecake", "white", 3}
        };
    for (int i = 0; i < 4; i++)
    {
        cout << species[i].name << " " << species[i].colour << " " << species[i].age << " " << species[i].born() << endl;
    }
        system("pause");
    return 0;
}   