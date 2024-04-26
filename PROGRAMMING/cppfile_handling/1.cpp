#include <iostream>
using namespace std;
#include <fstream>
int main()
{

    // ofstream fout("amol.txt");
    // ofstream fil;
    // fil.open("amol1.txt", ios :: app);
    ifstream inf("amol.txt", ios::in);
    string data;
    char s;
    while (!inf.eof())
    {
        // getline(in, data);
        // cout<<data<<endl;
        cout<< getc();
        // cout<<s;
    }

    return 0;
}