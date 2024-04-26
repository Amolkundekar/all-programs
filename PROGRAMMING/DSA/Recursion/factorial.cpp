#include<iostream>
using namespace std;


int fact(int n){
    if(n==1) return 1;
    return n* fact(n-1);
}
int main()
{
    int n;
    int answer;
    cout<<"Enter n value to find the factorial value "<<endl;
    cin>>n;
    answer = fact(n);
    cout<<"factorial of entered number is :"<<answer;


    return 0;
     
}