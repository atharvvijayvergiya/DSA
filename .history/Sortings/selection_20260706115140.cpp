#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={13,46,24,52,20,9};
    int n=6;
   
    for(int i=0;i<n-1;i++){
        int min = arr[i];
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];}
        }
        int temp = min;
        min=arr[i];
        arr[i]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
return 0;
}