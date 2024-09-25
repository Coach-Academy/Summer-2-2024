#include <bits/stdc++.h>

#define ll long long

using namespace std ; 

int minValue(int arr[] , int sz){
    int mn = 1e9 ; 
    for(int i=0 ; i<sz ; ++i){
        mn = min(arr[i] , mn) ; 
    }

    return mn ; 
}

void solve(){
    int n ;
    cin >> n ;

    int arr[n] ; 

    for(int i=0 ; i<n ;++i){
        cin >> arr[i] ;
    }

    int mn = minValue(arr , n) ; 

    cout << (mn-1 > 0 ? 1 : -1) ; 
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