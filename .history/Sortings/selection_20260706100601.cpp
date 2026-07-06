#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={13,46,24,52,20,9};

    // to get the minimum:

    int min = arr[0];
     for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
               if(arr[j]<min){
                min=arr[j];}
             }
             int temp = arr[min];
             arr[min]=arr[i];
             arr[i]=temp;
            }

        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }

}