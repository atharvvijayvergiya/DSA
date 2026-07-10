#include<bits/stdc++.h>
using namespace std;
// # the commented code is the optimal solution but the set solution is easy to remember;
// int duplicates(int arr[], int n){
//     int i=0;
// for(int j=1;j<n;j++){
//     if(arr[j]!=arr[i]){
//         arr[i+1]=arr[j];
//         i++;
//     }
// } return i+1;
// }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int result = duplicates(arr,n);
    // cout<<result;
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int result=st.size();
    for(auto i= st.begin(); i!=st.end();i++){
        cout<< *i<<" ";
    }
    cout<<<<result;
return 0;
}