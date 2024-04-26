#include<iostream>
using namespace std;


int fibo(int n){
    if(n<2) return n;
    return fibo(n-1)+ fibo(n-2);
}
int main()
{
    int n;
    int answer;
    cout<<"Enter n value to find the fibonacci number "<<endl;
    cin>>n;
    answer = fibo(n);
    cout<<"n'th fibonacci number is :"<<answer;


    return 0;
     
}