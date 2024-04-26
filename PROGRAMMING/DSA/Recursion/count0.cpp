#include<bits/stdc++.h>
using namespace std;

// // this is iterative approach 
// int count(int n)
// {
//     int c =0;
//     int rem ;
//     while(n)
//     {
//         rem = n%10;
//         if(rem == 0) c++;
//         n/=10;
//     }
//     return c;
// }

//////////////////////////////////////////////////////////////////////////////
// this is the recurrsive approach
int zerocount(int n, int c){

    if(n == 0) return c;
    int rem = n/10;
    
    //if reminder is 0 then increase the count and call next function if(n != 0)
    if(rem == 0) return zerocount(n/10, c+1);

    return zerocount(n/10, c);
}
int main()
{
    int num; 
    cout<<"enter number to count 0's in it ";
    cin>>num;

    cout<<"number of 0's in the given number are "<<zerocount(num, 0);


    return 0;
}