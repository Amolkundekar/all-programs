#include<bits/stdc++.h>
using namespace std;

struct Job {
    char id;
    int profit;
    int deadline;
};

bool cmp(Job a, Job b) {
    return (a.profit > b.profit);
}

void printJobSequence(vector<Job>& arr, int n) {
    sort(arr.begin(), arr.end(), cmp);

    int result[n];
    bool slot[n];

    for(int i=0;i<n;i++){
        slot[i] = false;
    }

    for(int i=0;i<n;i++){
        for(int j=min(n, arr[i].deadline)-1;j>=0;j--){
            if(slot[j]==false){
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }

    int profit = 0;
    for(int i=0;i<n;i++){
        if(slot[i]){
            profit += arr[result[i]].profit;
        }
    }

    cout<<"Job Sequence: ";
    for(int i=0;i<n;i++){
        if(slot[i]){
            cout<<arr[result[i]].id<<" ";
        }
    }
    cout<<endl;
    cout<<"Total Profit: "<<profit<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number of jobs: ";
    cin>>n;

    vector<Job> arr(n);
    cout<<"Enter the details of each job: (id, profit, deadline)"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i].id>>arr[i].profit>>arr[i].deadline;
    }

    printJobSequence(arr, n);

    return 0;
}

