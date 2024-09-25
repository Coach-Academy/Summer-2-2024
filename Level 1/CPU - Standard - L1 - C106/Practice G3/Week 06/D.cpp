#include <bits/stdc++.h>

#define ll long long

using namespace std ; 


void solve(){
    int n , m , x , y; 
    cin >> n >> m;

    int diff[n] ; 
    ll sum = 0 ; 

    for(int i=0 ; i<n ; ++i){
        cin >> x >> y ; 
        sum += x ;
        diff[i] = x - y ;  
    } 

    sort(diff , diff+n , greater<int>()) ; 

    for(int i=0 ; i<n ; ++i){
        if(sum<=m){
            cout << i ; 
            return ; 
        }

        sum -= diff[i] ; 
    }

    cout << (sum<=m ? n : -1) ; 
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