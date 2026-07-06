#include<bits/stdc++.h>
using namespace std;

int minimum(int arr[],int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

void swap (int a, int b){
    int temp, x,y;
    temp=x;
    x=y;
    y=temp;

}
int main(){
    int arr[]={13,46,24,52,20,9};
    int n=5;
    for(int i=0;i<n;i++){
        int min=minimum(arr,n);
        swap(arr[min],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}