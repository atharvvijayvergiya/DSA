#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int num){
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return true;
        }
}
return false;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int longest =1;
    //brute:
    // for(int i=0;i<n;i++){
    //         int x = arr[i];
    //         int count=1;

    //         while(linear_search(arr,n,x+1)==true){
    //             x=x+1;
    //             count++;
    //         }
    //         longest = max(longest,count);
    // }
    
    cout<<longest;
    return 0;
}