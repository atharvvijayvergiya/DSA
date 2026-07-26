#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Brute force approach:
//     for(int i=0;i<n;i++){
//         int flag=0;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]<arr[j]){
//                 flag=-1;
//                 break;
//             }
//     }
//     if(flag==0){
//         cout<<arr[i]<<" ";
//     }
// }

//optimal solution:
int maxi = INT_MIN;
for(int i=n-1;i>=0;i--){
    if(arr[i]>maxi){
        maxi=arr[i];
        maxi=max(maxi,arr[i]);
        cout<<maxi<<" ";
    }
}
return 0;
}