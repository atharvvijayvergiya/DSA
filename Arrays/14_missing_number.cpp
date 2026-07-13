#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum = (n * (n+1))/2;
        int s2 = 0;
        for(int i=0;i<n-1;i++){
            s2 = s2 + arr[i];
        }
        int ans = sum - s2;
        cout<<"The missing number is "<<ans;
        return 0;
    } 
// ###Brute Force Approach:

// #include<bits/stdc++.h>
// using namespace std;
// int linearSearch(int arr[],int n, int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i = 1; i<=n;i++){
//         int index = linearSearch(arr,n,i);
//         if(index == -1){
//             cout<<"The missing number is "<<i;
//         }
//     }
//     return 0;
// }