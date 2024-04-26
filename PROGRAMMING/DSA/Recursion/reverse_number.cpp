// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

int helper(int n , int d);
// //this function iteratively reverse the number
// int reverse1(int n){
//     int rem = 0;
//     int ans =0;
//     while (n>0)
//     {
//         rem = n%10;
//         ans = ans*10 + rem;
//         n = n/10;
//     }
//     return ans;
// }

//this function recurrsively reverses the number
int reverse2(int n){
    int digits = int(log10(n)+1);
    return helper( n, digits);
}


int helper(int n , int d)
{
    if(n%10 == n ) return n;
    int rem = n%10;
     
    return rem*pow(10, d-1) + helper(n/10, d-1);

}

// // function to check palindrome number
bool palindrome(int num)
{
    int rev = reverse2(num);
    if(rev == num) return true;

    return false;
}

int main(){

    int num;
    int answer;
    // cout<<"enter number to reverse ";
    // cin>>num;


// //using iterarive approach 
//     answer = reverse1(num);
//     cout<<"the reversed number is :"<<answer;


////////////////////////////////////////////////////////////////////////////////
// //using recurrsive approach 2
        // int ans = reverse2(num);
        // cout<<ans;

/////////////////////////////////////////////////////////////////////////////////
    //cheaking palindrome number
    int pnum;
    cout<<"enter the number to is it a palindrome or not"<<endl;
    cin>>pnum;
    cout<<palindrome(pnum);
    return 0;
}