#include<bits/stdc++.h>
using namespace std;
int bs(int arr[], int low, int high, int target){
    //terminating case;
    if(low>high){
        return -1;
    }
    int mid = (low) + (high-low)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid]>target){
        //high=mid-1;
        return bs(arr,low,mid-1,target);
    }
    else{
        //low=mid+1;
        return bs(arr, mid+1, high, target);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //fetch;
    int target;
    cin>>target;
    int low =0;
    int high=n-1;
    int ans=bs(arr,low,high,target);
    cout<<ans;
    return 0;
}