#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sorted = 1;
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
            sorted = 1;
        }
        else{
            sorted = 0;
            break;
        }
    }
    if(sorted == 1){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }

    return 0;
}