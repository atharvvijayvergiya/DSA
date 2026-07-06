#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={13,46,24,52,20,9};

    // to get the minimum:

    int min = arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<< min;

}