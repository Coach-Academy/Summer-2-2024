#include <bits/stdc++.h>

#define ll long long

using namespace std ; 

int numberOfDublicated(int arr[] , int sz){
    sort(arr , arr+sz) ; 
    int d = 0 ; 
    for(int i=0 ; i<sz-1 ; ++i){
        if(arr[i]==arr[i+1]) d++ ; 
    }

    return d ; 
}

void solve(){
    int s[4] ; 
    for(int i=0 ; i<4 ; ++i){
        cin >> s[i] ; 
    }
    cout << numberOfDublicated(s ,4) ; 
}

int main(){
    int t = 1 ; 
    // cin >> t ; 

    while(t--){
        solve() ; 
        cout << "\n" ; 
    }

    return 0 ; 
}