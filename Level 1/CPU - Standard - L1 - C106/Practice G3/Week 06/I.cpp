#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n ; 
    cin  >> n ; 
    int out , in , p = 0 , ans = 0; 
    
    for(int i=0 ; i<n ; ++i){
        cin >> out >> in ; 
        p += in ; 
        p -= out ; 

        ans = max(ans , p) ; 
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