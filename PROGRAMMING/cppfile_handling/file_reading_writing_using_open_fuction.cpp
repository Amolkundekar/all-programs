#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
//     ofstream out("sample5.txt", ios :: app);
//    // out.open("sample5.txt");
//     string data;
//     cout<<"enter what you want to write to file"<<endl;
//     getline(cin, data);
//     out<<data;
//     out.close();

    ifstream in("sample5.txt");
   // in.open("sample5.txt");
    string readed_data;
    // in>>readed_data;    // reads only one string till space 
    getline(in, readed_data);  // reads whole line
    cout<<"data readed from file is = "<<readed_data<<endl;
    in.close();

    return 0;
}