#include<bits/stdc++.h>
using namespace std;
int bsRotatedArray(int arr[], int n, int target){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==target){
            return true;
        }
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++,high--;
            continue;
        }
        //left sorted
        else if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=target && target<=arr[high]){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
    }
    return false;
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
    bool ans = bsRotatedArray(arr,n,target);
    cout<<ans;
    return 0;
}
