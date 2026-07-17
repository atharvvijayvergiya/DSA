//to check if array is sorted:
#include<bits/stdc++.h>
using namespace std;
int checkSorted(int a[], int n){
    int flag = 0;
    for(int i=0;i<n;i++){
        if(a[i+1]>=a[i]){
            flag = 1;
        }
        else{
            flag = 0;
        }
    }
    return flag;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int result = checkSorted(a,n);
    if(result==1){
        cout<<"sorted";
    }
    else{
        cout<<"Unsorted";
    }
    return 0;
}