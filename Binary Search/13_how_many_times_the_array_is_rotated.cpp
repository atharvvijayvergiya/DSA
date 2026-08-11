// the index of the minimum value is the number o times the array is rotated
#include<bits/stdc++.h>
using namespace std;
int numberoftimesarrayisrotated(int arr[], int n){
    int low=0;
    int high=n-1;
    int index = -1;
    int ans = INT_MAX;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[low]<=arr[high]){
            if(arr[low]<ans){
                index = low;
                ans = arr[low];
            }
            break;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low] < ans){
                index  =low;
                ans = arr[low];
            }
            low = mid+1;
        }
        else{
            high = mid-1;
            if(arr[mid]<ans){
                index = mid;
                ans = arr[mid];
            }
        }
    }
    return index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //fetch;
    int result = numberoftimesarrayisrotated(arr,n);
    cout<<result;
    return 0;
}