//removing duplicates
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //made set and printed the set values, duplicates removed
    set<int> s(a,a+n);
    for(auto it:s){
        cout<<it<<" ";
    }
    return 0;
}