//second largest element
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  //brute approach;
    //converting array into set for sorted as well as unique elements:
  set <int> s(a,a+n);
    //again convert the set into an array using vector:
    vector <int> b(s.begin(),s.end());
    // we are doing -2 becuase the index starts with zero, so to find the 
    //largest element we already have it at 4th index so we do -2 to get the second 
    //largest elment:
    if(b.size()==1){
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
        cout<<b[b.size()];
    }
    else{
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<endl;
    cout<<b[b.size()-2];
    } 
   return 0;
}