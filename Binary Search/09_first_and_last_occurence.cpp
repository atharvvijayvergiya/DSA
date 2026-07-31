#include<bits/stdc++.h>
using namespace std;
//lower bound fucntion:
int lowerBound(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
}
return ans;
}
//upper bound function:
int upperBound(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>x){
            ans = mid;
            high = mid-1;
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
    int x;
    cin>>x;
    int first = lowerBound(arr, n, x);
    int last = upperBound(arr,n,x) - 1;
    if(first==n || arr[first]!=x){
        first = -1;
        last = -1;
    }
    cout<<first<<" "<<last;
    return 0;
}