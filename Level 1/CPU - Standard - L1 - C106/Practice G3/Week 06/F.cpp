#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n ; 
    cin >> n ; 
    int arr[n] ; 
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    int mx = arr[0] , mn = arr[0] , cnt = 0 ; 

    for(int i=1 ; i<n ; ++i){
        if(arr[i]>mx){
            cnt ++ ; 
            mx = arr[i] ; 
        }
        if(arr[i]<mn){
            cnt ++ ; 
            mn = arr[i] ; 
        }
    }

    cout << cnt ; 
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