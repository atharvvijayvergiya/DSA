#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j-1],a[j]);
            j--;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    insertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}