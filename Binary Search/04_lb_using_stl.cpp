#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int lb = lower_bound(arr.begin(),arr.end(),target) - arr.begin();
    cout<<lb;
    return 0;
}