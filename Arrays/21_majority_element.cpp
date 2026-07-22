#include<bits/stdc++.h>
using namespace std;
int majorityElement(int a[], int n){
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count>n/2){
            return a[i];
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //brute force approach:
    int ans = majorityElement(a,n);
    cout<<ans<<" is the majority element";
    return 0;
}