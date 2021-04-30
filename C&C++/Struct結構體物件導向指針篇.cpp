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

    /*Sheep species[4] = {
        {"meme", "green", 5},
        {"Smallme", "white", 4},
        {"meamea", "Pink", 6},
        {"mecake", "white", 3}
        };*/

    Sheep A = {"meme", "green", 5};
    Sheep B = {"Smallme", "white", 4};
    Sheep C = {"meamea", "Pink", 6};
    Sheep D = {"mecake", "white", 3};

    Sheep *psheep[] = {&A, &B, &C, &D};

    for (int i = 0; i < sizeof psheep / sizeof(psheep[0]); i++)
    {
        cout << psheep[i]->name << " " << psheep[i]->colour << " " << psheep[i]->age << " " << psheep[i]->born() << endl;
        //cout << species[i].name << " " << species[i].colour << " " << species[i].age << " " << species[i].born() << endl;
    }
        system("pause");
    return 0;
}   