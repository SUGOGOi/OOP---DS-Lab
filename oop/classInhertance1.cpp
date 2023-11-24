#include <iostream>
using namespace std;

class Animal
{
private:
    bool hungry;
    bool sleepy;
    bool isHungry() { return hungry; }
    bool isSleepy() { return sleepy; }

public:
    Animal()
    {
        hungry = true;
        sleepy = false;
    }

    void eat() { hungry = false, sleepy = true; }
    void sleep() { hungry = true, sleepy = false; }

    virtual void makeNoise() // must overwrite = virtual
    {
        cout << "Animal makes noise! ";
    }
};

class Dog : public Animal
{
public:
    void makeNoise()
    {
        cout << "Dog bark - woof! woof!";
    }
};

class Cat : public Animal
{
public:
    void makeNoise()
    {
        cout << "Cats says - Meow! Meow!";
    }
};

int main()
{

    Animal an;
    an.makeNoise();
    cout << endl;

    Animal *ans;

    Dog dog;
    // dog.makeNoise();
    // dog.isHungry();
    ans = &dog;
    ans->makeNoise();
    cout << endl;

    Cat cat;
    // cat.makeNoise();
    // cat.isHungry();
    ans = &cat;
    ans->makeNoise();

    return 0;
}