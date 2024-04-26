#include <iostream>
#include <stdexcept>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day = 1;
        month = 1;
        year = 2023;
    }

    void setDate(int day1, int month1, int year1)
    {
        try
        {
            if (day < 1 || day > 31)
            {
                throw invalid_argument("Invalid day");
            }

            if (month < 1 || month > 12)
            {
                throw invalid_argument("Invalid month");
            }

            if (year < 1900)
            {
                throw invalid_argument("Invalid year");
            }
        }
        catch (invalid_argument e)
        {
            cout << "Caught exception "<< "of  "<< "class." << endl;
        }

        month = month1;
        day = day1;
        year = year1;
    }

    void print()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Person
{
private:
    string name;
    int id;

public:
    Person()
    {
        name = "";
        id = 0;
    }

    void setName(string name1)
    {
        if (name.empty())
        {
            throw invalid_argument("Invalid name");
        }

        name = name1;
    }

    void setId(int id1)
    {
        if (id < 0)
        {
            throw invalid_argument("Invalid ID");
        }

        id = id1;
    }

    void print()
    {
        cout << name << " (ID: " << id << ")" << endl;
    }
};

int main()
{
    Date date;
    date.setDate(1, 1, 2023);
    date.print();

    Person person;
    person.setName("John Doe");
    person.setId(123456);
    person.print();

    try
    {
        person.setName("");
    }
    catch (invalid_argument e)
    {
        cout << "Invalid argument: " << e.what() << endl;
    }

    return 0;
}