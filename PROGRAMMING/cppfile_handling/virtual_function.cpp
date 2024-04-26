#include <iostream>
using namespace std;

class simple 
{
    int a = 26;
    public:
        virtual void display() // this specifies that run that objects corresponding function
                               // not the pointer type corresponding object
        {
            cout<<"value of a in base class is "<<a<<endl;
        }
};

class derived : public simple
{
    int b = 54;
    public:
        void display()
        {
            cout<<"value of b in derived class is "<<b<<endl;
        }
};

int main()
{
    simple * simple_pointer;
    simple s1;
    derived d1;
    simple_pointer = &d1;
    s1.display();
    simple_pointer->display();
    d1.display();


    return 0;
}