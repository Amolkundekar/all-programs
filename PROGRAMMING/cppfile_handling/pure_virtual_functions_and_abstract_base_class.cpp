#include <iostream>
#include <cstring>
using namespace std;

class car /* abstract base class = a class which must be derived ahead.
             every abstract base class must have at least one pure virtual function
          */
{
    protected:
        string name;
        float power;
        int no_of_seats;
    public:
        car(string cname, float cpower, int c_no_of_seats)
        {
            name = cname;
            power = cpower;
            no_of_seats = c_no_of_seats;
        }
        virtual void display() = 0;
        /* above is pure virtual function. pure virtual function is a function which 
           must need its redefination ahead in derived class. 
        */
        

};

class indian_car : public car
{
    float safety_rating;
    string colour;
    public:
        indian_car(string cname, float cpower, int c_no_of_seats, float csafety, string color): car(cname, cpower, c_no_of_seats)
        {
            safety_rating = csafety;
            colour = color;
        }
        void display() // if i don't write this function 'void display()' program not runs
                       // because we know that if derived class, is from abstract base 
                       // class then there is pure virtual function and pure virtual 
                       // function needs its redefination wherever it defined.
        {
            cout<<endl<<endl;
            cout<<"this is an indian car"<<endl;
            cout<<"name = "<<name<<endl;
            cout<<"power = "<<power<<"hp"<<endl;
            cout<<"total seats = "<<no_of_seats<<endl;
            cout<<"safety rating = "<<safety_rating<<" out of 5"<<endl;
            cout<<"colour = "<<colour<<endl;
        }
};

class my_own_car : public car
{
    float modification_cost;
    string name_given_by_me;
    public:
        my_own_car(string cname, float cpower, int c_no_of_seats, float my_modification_cost, string my_name) : car(cname, cpower, c_no_of_seats)
        {
            modification_cost = my_modification_cost;
            name_given_by_me = my_name;
        }
        void display() // if i don't write this function 'void display()' program not runs
                       // because we know that if derived class, is from abstract base 
                       // class then there is pure virtual function and pure virtual 
                       // function needs its redefination wherever it defined.
        {
            cout<<endl<<endl;
            cout<<"this is about my own car"<<endl;
            cout<<"name = "<<name<<endl;
            cout<<"power "<<power<<"hp"<<endl;
            cout<<"total seats "<<no_of_seats<<endl;
            cout<<"modification cost = "<<modification_cost<<" lakhs"<<endl;
            cout<<"nick name = "<<name_given_by_me<<endl;
        }
};

int main()
{
    string name = "harrier";
    string colour = "black";
    float power = 170;
    int seats = 5;
    float safetyrating = 4.9;
    string nickname = "end of you";
    float modificationscost = 11.2;

    indian_car ind(name, power, seats, safetyrating, colour);
    //ind.display();

    name = "ENDEAVOUR";
    colour = "blackhole black";
    power = 210;

    my_own_car mycar(name, power, seats, modificationscost, nickname);
    //mycar.display();

    car* c1 = &ind;
    car* c2 = &mycar;
    c1->display();
    c2->display();

    return 0;
}