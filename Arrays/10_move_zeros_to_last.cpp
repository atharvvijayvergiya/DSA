#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}



// My personal brute force code:
//     int count=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]==0){
//             count++;
//     }
// }
//     cout<<endl<<count;
//     cout<<endl;
//     int temp[n-count];
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i] != 0){
//             temp[j]=arr[i];
//             j++;
//         }
//     }
//     for(int i=0;i<n-count;i++){
//         cout<<temp[i]<<" ";
//     }
//     for(int i=count;i>0;i--){
//         cout<<"0"<<" ";
// }


      
