#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // if file is not present then at the time of opening program automatically 
    // creates it.


    // >>>>>>  opening file by constructor and writing operation <<<<<<< 
    string sentence;
    cout<<"enter what you want to write to file"<<endl;
    cin>>sentence;
    ofstream write("sample1.txt"); // you can create any object name
                                  // opening file and writing in it using constructor. Here
                                  // 'ofstream' is a predefined class and it is derived from
                                  // 'fstream'. 'ofstream' class object 'write' is created
                                  // and file is opened, This class objects are used to write
    
    write<<sentence;              // actual writing to file is done
    write << "Hi, how are you?";  // actual writing to file is done


    // >>>>>>> opening file by constructor and reading from it <<<<<
    string readed_data;
    ifstream read("sample2.txt");
    
    read >> readed_data;          // this function only reads single word not whole sentence
                                  // to take whole sentence 'getline()' is used
    cout<<readed_data<<endl;
    getline(read, readed_data);   // first use of getline reads first line
    cout<<readed_data<<endl;
    getline(read, readed_data);   // here is second use of getline so next line ie read
    cout<<readed_data<<endl;

    return 0;
}