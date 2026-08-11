#include<bits/stdc++.h>
using namespace std;
int minSortedArr(int arr[], int n){
    int low=0, high=n-1,ans=INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[low]<=arr[mid]){
            ans = min(ans,arr[low]);
            low=mid+1;
        }
        else {
            high = mid-1;
            ans = min(ans,arr[mid]);
           
        }
    }
    return ans;
}   
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = minSortedArr(arr,n);
    cout<<result;
    return 0;
}