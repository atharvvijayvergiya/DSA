#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int a[], int n){
   int flag = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j+1]<a[j]){
                swap(a[j+1],a[j]);
                flag = 1;
            }
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
   int result = bubbleSort(a,n);
    if(result == 0){
        cout<<"Array already sorted"<<endl;
    }
    else{
        cout<<"The sorted array is: "<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}