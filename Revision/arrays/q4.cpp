//removing duplicates from a sorted array:
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //optimization:
    int i = 0;
    for(int j=1;j<n;j++){
        if(a[j] != a[i]){
            a[i+1] = a[j];
            i++;
    }
}
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    // //made set and printed the set values, duplicates removed
    // set<int> s(a,a+n);
    // for(auto it:s){
    //     cout<<it<<" ";
    // }
    return 0;
}