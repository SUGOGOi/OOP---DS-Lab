#include <iostream>
using namespace std;

class Hero
{

public:
    int age;
    Hero()
    {
        cout << "Default constructor called" << endl;
    }
};

int main()
{
    Hero h1;
    return 0;
}