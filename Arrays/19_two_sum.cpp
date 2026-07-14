#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<= mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}
void ms(vector <int> &arr,int low, int high){
        if(low == high) return;
        int mid = (low+high)/2;
        ms(arr,low, mid);
        ms(arr, mid+1,high);
        merge(arr,low,mid,high);
}
void mergesort(vector<int> &arr,int n){
    ms(arr,0,n-1);
}
pair<int, int> twoSum(vector<int>arr,int k){
    int n = arr.size();
    mergesort(arr,n);
    int left = 0;
    int right = n-1;
    int sum = 0;
    while(left<right){
        sum = arr[left] + arr[right];
        if(sum==k){
            return {arr[left],arr[right]};
        }
        else if(sum > k){
            right--;
        }
        else{
            left++;
        }

    }
    return{-1,-1};
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    pair<int,int> result = twoSum(arr,k);
    cout<<"The first number is: "<<result.first<<" and,"<<endl;
    cout<<"The second number is: "<<result.second;
    return 0;
}
// ### Brute Force
// #include<bits/stdc++.h>
// using namespace std;
// pair<int,int> twoSum(vector<int> arr, int k){
//     for(int i=0;i<arr.size();i++){
//         for(int j=i+1;j<arr.size();j++){
//             int sum = arr[i]+arr[j];
//             if(sum == k){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1, -1};
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k;
//     cin>>k;
//     pair<int, int> result = twoSum(arr,k);
//     cout<<result.first<<",";
//     cout<<result.second;
//     return 0;
// }