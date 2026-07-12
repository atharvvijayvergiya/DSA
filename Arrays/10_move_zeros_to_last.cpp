#include<bits/stdc++.h>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void remove_zeros_atend(int arr[], int n){
    // step 1: finding the first zero element in the array and pointing its index with j;
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }
    // step 1.1: if there are no zero elements in the arr;
    if(j==-1){
        return;
    }
    // step 2: to iterate the array from the first zero element to the last element of the array
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    remove_zeros_atend(arr,n);

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


      
