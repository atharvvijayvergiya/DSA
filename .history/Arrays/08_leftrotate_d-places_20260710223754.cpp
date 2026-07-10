#include<bits/stdc++.h>
using namespace std;
void leftrotate(int arr[], int n, int d){
    reverse(arr,arr+d);
    reverse
}

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    return 0;
} 




// what i tried for the brute force solution 
    //int d;
    // cin>>d;
    // d = d % n;
    // int temp[d];
    // for(int i=0;i<=d;i++){
    //     temp[i] = arr[d+i];
    //     cout<<temp[i]<<" ";
    // }

    // for(int i=n;i>n-d;i--){
    //     cout<<temp[i]<<" ";
    // }