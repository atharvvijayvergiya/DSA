#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int, int> mpp;
    for(int i=0;i<n;i++){ 
    }
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    //iterating a hash map:
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    return 0;
}