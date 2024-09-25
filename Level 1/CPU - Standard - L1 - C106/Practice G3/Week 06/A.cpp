#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n ; cin >> n ; 

    int arr[n] ; 
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    sort(arr , arr+n) ; 

    for(int i=0 ; i<n ; ++i){
        cout << arr[i] << " " ; 
    }
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