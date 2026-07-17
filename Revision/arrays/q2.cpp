#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] < ssmallest&& a[i] > smallest){
            ssmallest = a[i];
        }
    }
    cout<<ssmallest;
    // int largest = a[0];
    // int slargest = -1;
    // for(int i=0;i<n;i++){
    //     if(a[i]>largest){
    //         slargest = largest;
    //         largest = a[i];
    //     }
    //     else if(a[i] > slargest && a[i] < largest){
    //         slargest = a[i];
    //     }
    // }
    // cout<<slargest;
    return 0;
}