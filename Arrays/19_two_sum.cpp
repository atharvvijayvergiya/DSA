#include<bits/stdc++.h>
using namespace std;
pair<int, int> twoSum(vector<int>arr,int k){
    int n = arr.size();
    int left = 0;
    int right = n-1;
    int sum = 0;
    while(left<right){
        sum = arr[left] + arr[right];
        if(sum==k){
            return {left,right};
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
    //using the build in sort function in cpp
    sort(arr.begin(),arr.end());
    pair<int,int> result = twoSum(arr,k);
    cout<<"The first index is: "<<result.first<<" and,"<<endl;
    cout<<"The second index is: "<<result.second;
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