#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxSum = INT_MIN;
    //brute approach:
    // 
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum =0;
    //         for(int k = i;k<=j;k++){
    //         sum = sum + arr[k];
    //         maxSum=max(maxSum,sum);
    //         }
    //     }
    // }
    // cout<<maxSum;
    
    //better approach
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum = sum +arr[j];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum;
    return 0;
}   