#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n ;
    cin >> n ; 
    int h[n] , mx = 0 , mn = 100; 

    for(int i=0 ; i<n ; ++i){
        cin >> h[i] ; 
        mx = max(mx , h[i]) ;
        mn = min(mn , h[i]) ;
    }

    int idx1 = -1 , idx2 = -1 ; 
    for(int i=0 ; i<n ; ++i){
        if(h[i]==mx && idx1 == -1){
            idx1 = i ; 
        }
        if(h[i]==mn){
            idx2 = i ; 
        }
    }

    int swaps = 0 ; 
    for(int i = idx1 ; i>=1 ; --i){
        swap(h[i] , h[i-1]) ; 
        swaps++ ; 
    }

    for(int i = idx2 ; i<n-1 ; ++i){
        swap(h[i] , h[i+1]) ;
        swaps++ ;  
    }

    cout << swaps - (idx1>idx2); 

    // cout << (n - idx2 - 1) + idx1 - (idx1>idx2) ; 
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