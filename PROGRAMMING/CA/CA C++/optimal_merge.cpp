#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;

    // Input the elements
    vector<int> v(n);
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    // Sort the elements in non-decreasing order
    sort(v.begin(), v.end());

    // Merge the elements in pairs
    int cost = 0;
    while(v.size()>1){
        int sum = v[0]+v[1];
        cost += sum;
        v.erase(v.begin(), v.begin()+2);
        v.insert(lower_bound(v.begin(), v.end(), sum), sum);
    }

    cout<<"The optimal merge cost is: "<<cost<<endl;

    return 0;
}

