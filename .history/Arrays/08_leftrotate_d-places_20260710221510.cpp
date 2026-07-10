#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    d = d % n
    cin>>d;
    int temp[d];
    for(int i=0;i<=d;i++){
        temp[i] = arr[d+i];
        cout<<temp[i]<<" ";
    }

    for(int i=n;i>n-d;i--){
        cout<<temp[i]<<" ";
    }


    return 0;
}  