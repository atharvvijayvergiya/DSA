#include<bits/stdc++.h>
using namespace std;
int singleSearch(int arr[] ,int n){
    int low = 1;
    int high = n-2;
    if(n==1){return arr[0];}
    if(arr[0]!=arr[low]){
        return arr[0];
    }
    else if(arr[n-1]!=arr[n-2]){
        return arr[n-1];
    }

    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
            return arr[mid];
        }
        if(mid%2==1){
            if(arr[mid-1]==arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //fetch;
    int ans = singleSearch(arr,n);
    cout<<ans;
    return 0;
}