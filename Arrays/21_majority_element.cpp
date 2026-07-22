#include<bits/stdc++.h>
using namespace std;
// int majorityElement(int a[], int n){
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=0;j<n;j++){
//             if(a[i]==a[j]){
//                 count++;
//             }
//         }
//         if(count>n/2){
//             return a[i];
//         }
//     }
//     return 0;
// }

// better solution:
int majorityElement(vector<int> v){
    map <int,int> mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
    }
    for(auto it:mpp){
        if (it.second > (v.size()/2)){
            return it.first;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    // //brute force approach:
    // int ans = majorityElement(a,n);
    // cout<<ans<<" is the majority element";
    int ans = majorityElement(v);
    cout<<ans;
    return 0;
}