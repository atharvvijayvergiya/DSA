#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // brute force approach:
    // int profit =INT_MIN;
    // int diff = 0;
    // for(int i=0;i<n;i++){
    //     for(int j = i+1;j<n-1;j++){
    //          diff = arr[j] - arr[j-1];
    //          profit = max(profit,diff);
    //         }
    // }
    int mini = arr[0];
    int profit = 0;
    for(int i=0;i<n;i++){
        int cost = arr[i] - mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    cout<<profit;
    return 0;
}