#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n , m ; 
    cin >> n >> m ; 
    int p[m] ; 
    for(int i=0 ; i<m ; ++i){
        cin >> p[i] ; 
    }

    sort(p , p+m) ; 
    int ans = 1000 ; 

    for(int i=0 ; i<m-(n-1) ; i++){
        ans = min(ans , p[i+(n-1)] - p[i]) ; 
    }

    cout << ans ; 
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