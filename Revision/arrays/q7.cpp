//remove zeroes to end:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j = 0;
    int p = 0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            j = i;
            p = j+1;
        } 
    }
    return 0;
}