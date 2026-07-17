// left rotate by d places;
#include<bits/stdc++.h>
using namespace std;
void leftRotate(int a[],int n, int d){
    reverse(a,a+d);
    reverse(a+d,a+n);
    reverse(a,a+n);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d;
    cin>>d;
    d = d%n;
    leftRotate(a,n,d);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}




//Brute Force coded:
     //int temp[d];
    // for(int i=0;i<d;i++){
    //     temp[i] = a[i];
    // }
    // for(int i=d;i<n;i++){
    //     a[i-d]=a[i];
    //     cout<<a[i]<<" ";
    // }
    // for(int i = 0;i<d;i++){
    //     cout<<temp[i]<<" ";
    // }