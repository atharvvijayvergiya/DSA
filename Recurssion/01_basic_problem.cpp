#include<bits/stdc++.h>
using namespace std;

//print name 5 times:

void func(int n, string name){

    if(n==0){
        return;
    }

else{
    cout<<name<<endl;
    func(n-1,name);
}
}

int main(){
    string name;
    cout<<"Enter the name you want to print: ";
    cin>>name;

    func(5,name);


    return 0;
}