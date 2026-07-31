#include<bits/stdc++.h>
using namespace std;
int firstElement(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int first = -1;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            first = mid;
            high = mid -1;
        }
        else{
            low = mid+1;
        }
    }
    return first;
}

int lastElement(int arr[], int n, int x){
    int low=0;
    int high=n-1;
    int last = -1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==x){
            last=mid;
            low = mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return last;
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
    int first = firstElement(arr,n,x);
    int last = lastElement(arr,n,x);
    cout<<first<<" "<<last;
    return 0;
}