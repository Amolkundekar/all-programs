#include <iostream>
using namespace std;

class first
{
    public:
        void message()
        {
            cout<<"what are you doing?"<<endl;
        }
};

class second
{
    public:
        void message()
        {
            cout<<"How are you?"<<endl;
        }
};

class derived : public first, public second
{
    public:
        void message()
        {
            
        }
        // {
        //     //second :: message();
        //     // cout<<"rrctfct";
        // }
/* if in derived class that same name function defination exists then no ambiguity formed
   it invokes its own function
*/
};

int main()
{
    first f1;
    f1.message(); // has its own function and so invokes it

    second s1;
    s1.message(); // has its own function and so invokes it

    derived d1;
    d1.message(); // derived class but ambiguies so we need to resolve ambiguity
                  // that function defination not written in derived class

    return 0;
} 