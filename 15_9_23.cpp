#include <iostream>

class Animal
{
    // protected:
    bool hungry;
    bool sleepy;

public:
    Animal()
    {
        hungry = true;
        sleepy = false;
    }
    bool isHungry()
    {
        return hungry;
    }
    bool isSleepy()
    {
        return sleepy;
    }
};

class Dog : public Animal
{
public:
    // void sleep() { hungry = true, sleepy = false; }
    // void eat() { hungry = false, sleepy = true; }
    void bark()
    {
        std::cout << "woof! woof!";
    }
};

int main()
{

    Dog dog;

    std::cout << "\n Dog hungry? : " << dog.isHungry();
    // std::cout << "\n Dog eat..... ", dog.eat();
    std::cout << "\n Dog hungry? : " << dog.isHungry();
    // std::cout << "\n Dog sleep.....", dog.sleep();
    std::cout << "\n Dog hungry? : " << dog.isHungry();

    std::cout << "\n Dog bark : ", dog.bark();

    return 0;
}