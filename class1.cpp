#include <iostream>
using namespace std;

class Hero
{

private:
    char level;

public:
    // properties
    int health;

    char getLevel()
    {
        return level;
    }

    void setLevel(char a)
    {
        level = a;
    }
};

int main()
{
    // static allocation
    Hero h1;

    cout << "Size: " << sizeof(h1) << endl;
    h1.health = 50;
    cout << "Health is: " << h1.health << endl;
    // cout << "Health is: " << h1.level << endl;
    h1.setLevel('B');
    cout << "Level is: " << h1.getLevel() << endl;

    // dynamically allocation
    Hero *h2 = new Hero;

    cout << "Size: " << sizeof(*h2) << endl;
    h2->health = 70;
    cout << "Health is: " << (*h2).health << endl;
    // cout << "Health is: " << h1.level << endl;
    h2->setLevel('A');
    cout << "Level is: " << h2->getLevel() << endl;

    return 0;
}