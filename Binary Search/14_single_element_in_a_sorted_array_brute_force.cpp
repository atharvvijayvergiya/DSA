#include<bits/stdc++.h>
using namespace std;
int singleElement(int arr[], int n){
    for(int i=0;i<n;i++){
        if(i==0){
            if(arr[i+1]!=arr[i]){return arr[0];}
        }
        else if(i==n-1){
            if(arr[i-1]!=arr[i]){return arr[i];}
        }
        else{
            if(arr[i]!=arr[i+1] && arr[i]!=arr[i-1]){return arr[i];}
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
    int ans = singleElement(arr,n);
    cout<<ans;
    return 0;
}
        