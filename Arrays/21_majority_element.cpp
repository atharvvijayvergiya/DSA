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
// int majorityElement(vector<int> v){
//     map <int,int> mpp;
//     for(int i=0;i<v.size();i++){
//         mpp[v[i]]++;
//     }
//     for(auto it:mpp){
//         if (it.second > (v.size()/2)){
//             return it.first;
//         }
//     }
//     return -1;
// }

// optimal soluition: Moore's Voting Algorithm:
int majorityElement(vector<int> v){
    int cnt = 0;
    int el;
    for(int i=0;i<v.size();i++){
        if(cnt==0){
            cnt = 1;
            el = v[i];
        }
        else if(v[i]==el){
            cnt++;
    }
    else{
        cnt--;
    }
    int cnt1 = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] == el){
            cnt1++;
        }
        if(cnt1 >(v.size()/2)){
            return el;
        }
    }
    return -1;
}

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

    //better solution:
    // int ans = majorityElement(v);
    // cout<<ans;

    //optimal solution:
    int ans = majorityElement(v);
    cout<<ans;
    return 0;
}
