#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index =-1;
    for(int i=n-1;i>=0;i--){
        if(arr[i]<arr[i+1]){
            index=i;
            break;
        }
        if(index==-1){
            reverse(arr,arr+n);
        }
    }

    for(int i=n-1;i>=index;i--){
        if(arr[index]<arr[i]){
            swap(arr[index],arr[i]);
        }
    }

    reverse(arr+index+1,arr+n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}