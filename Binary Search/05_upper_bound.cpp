#include<bits/stdc++.h>
using namespace std;
int upperBound(int arr[], int n, int target){
    int low=0;
    int high=n-1;
    int ans=n;
    while(low<=high){
        int mid=(low+high)/2;
        // this is the diff of >= in lower bound and just > in upper bound;
        if(arr[mid]>target){
            ans = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
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
    int target;
    cin>>target;
int upper_bound_index = upperBound(arr,n,target);
cout<<upper_bound_index;
    return 0;
}