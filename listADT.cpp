#include <iostream>
#include <memory>
using namespace std;
class ListADT
{
private:
    unsigned int count;
    const unsigned int _capacity_;
    unique_ptr<int[]> elements;
    friend std::ostream &operator<<(std::ostream &, ListADT &);

public:
    ListADT() : _capacity_(10), count(0), elements(new int[_capacity_]{}) {}

    ListADT(int num) : _capacity_(num), count(0), elements(new int[_capacity_]{}) {}

    int get(int fromLocation)
    {
        if (fromLocation < 1 || fromLocation > _capacity_)
            exit(1);
        return elements[fromLocation - 1];
    }
    void insert(int element, int atLocation)
    {
        if (atLocation < 1 || atLocation > _capacity_)
            exit(1);
        elements[atLocation - 1] = element;
        count++;
    }
    void remove(int element)
    {
        if (isEmpty())
            exit(1);
        for (int i = 0; i < _capacity_; i++)
            if (elements[i] == element)
            {
                elements[i] = 0, count--;
                return;
            }
    }
    void removeAt(int fromLocation)
    {
        if (isEmpty())
            exit(1);
        if (fromLocation < 1 || fromLocation > _capacity_)
            exit(1);
        elements[fromLocation - 1] = 0;
        count--;
    }
    void replace(int withElement, int atLocation)
    {
        if (atLocation < 1 || atLocation > _capacity_)
            exit(1);
        elements[atLocation - 1] = withElement;
    }
    int size()
    {
        return static_cast<int>(count);
    }
    int capacity()
    {
        return static_cast<int>(_capacity_);
    }
    bool isEmpty()
    {
        return (count == 0);
    }
    bool isFull()
    {
        return (count == _capacity_);
    }
};
std::ostream &operator<<(std::ostream &os, ListADT &list)
{
    for (int i = 0; i < list.capacity(); i++)
        os << list.get(i + 1) << " ";
    return os;
}
int main()
{
    ListADT list(20);
    cout << "capacity = " << list.capacity();
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    for (int i = 1; i <= list.capacity() - 10; i++)
        list.insert(i, i);
    cout << "\n\nfor (int i = 1; i <= capacity-10; i++)"
         << "list.insert(i, i);";
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    list.insert(200, 11);
    cout << "\n\nlist.insert(200, 11);";
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    list.replace(200, 2);
    cout << "\n\nlist.replace(200, 2);";
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    list.remove(200);
    cout << "\n\nlist.remove(200);";
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    list.removeAt(3);
    cout << "\n\nlist.removeAt(3);";
    cout << "\nsize = " << list.size() << endl
         << "elements : " << list;

    return 0;
}