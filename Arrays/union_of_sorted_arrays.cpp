#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();

    int i = 0, j = 0;
    vector<int> unionarr;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (unionarr.empty() || unionarr.back() != a[i]) {
                unionarr.push_back(a[i]);
            }
            i++;
        } else {
            if (unionarr.empty() || unionarr.back() != b[j]) {
                unionarr.push_back(b[j]);
            }
            j++;
        }
    }

    // Remaining elements of a
    while (i < n1) {
        if (unionarr.empty() || unionarr.back() != a[i]) {
            unionarr.push_back(a[i]);
        }
        i++;
    }

    // Remaining elements of b
    while (j < n2) {
        if (unionarr.empty() || unionarr.back() != b[j]) {
            unionarr.push_back(b[j]);
        }
        j++;
    }

    return unionarr;
}

int main() {
    int n1;
    cin >> n1;

    vector<int> arr1(n1);
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    int n2;
    cin >> n2;

    vector<int> arr2(n2);
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> ans = sortedArray(arr1, arr2);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}

// #Brute Force approach:
    // set<int> st;
    // for(int i=0;i<n1;i++){
    //     st.insert(arr1[i]);
    // }
    // for(int i=0;i<n2;i++){
    //     st.insert(arr2[i]);
    // }
    // int unionarr[st.size()];
    // int i=0;
    // for(auto it:st){
    //     unionarr[i++]=it;
    // }
    //     unionarr.add(it);    