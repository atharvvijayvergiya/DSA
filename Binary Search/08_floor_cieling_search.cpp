#include<bits/stdc++.h>
using namespace std;
//floor: smallest number in array >= x;
//(lower bound index with base answer -1, instead of n)
int bs_floor(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    int floor_ans = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]>=target){
            floor_ans = arr[mid];
            high = mid -1;
        }
        else{
            low = mid +1;
        }
    }
    return floor_ans;
}
//cieling : longest no. in array <= x;
int bs_ceiling(int arr[], int n, int target){
    int low = 0;
    int high = n-1;
    int cieling_ans=-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]<=target){
            cieling_ans=arr[mid];
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return cieling_ans;
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
    int floor = bs_floor(arr, n,target);
    int ceiling = bs_ceiling(arr, n, target);
    cout<<"The floor is: "<<floor<<endl;
    cout<<"The ceiling is: "<<ceiling;
    return 0;
}