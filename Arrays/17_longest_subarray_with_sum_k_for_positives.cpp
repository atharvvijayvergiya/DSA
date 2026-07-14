#include<bits/stdc++.h>
using namespace std;
int longestSubarraywithSumKofPositives(vector<int>arr, long long k){
    int left = 0;
    int right = 0;
    int maxLen = 0;
    long long sum = arr[0];
    int n = arr.size();
    while(right<n){
        while(left<=right && sum>k){
            sum = sum - arr[left];
            left++;
        }
        if(sum == k){
            maxLen = max(maxLen,right - left + 1);
        }
        right++;
        if(right<n){
            sum = sum + arr[right];
        }
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long k;
    cin>>k;
    int result = longestSubarraywithSumKofPositives(arr,k);
    cout<<result;
    return 0;
}
