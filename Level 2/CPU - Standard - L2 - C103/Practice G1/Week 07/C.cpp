#include <bits/stdc++.h>

using namespace std ; 

int moves(int n , int &m){
    if(n > m) return -1e9 ; 
    if(n==m) return 0 ; 

    return 1+max(moves(n*2 , m) , moves(n*3 , m)) ;  
}

int main(){
    int n , m ; 
    cin >> n >> m ; 
    cout << max(-1 , moves(n , m)) ; 

    // math solve
    // if(m % n != 0){
    //     cout << -1 ; 
    //     return 0 ; 
    // }

    // // n * t = m ; 
    // int t = m / n , ans = 0  ; 

    // while(t%2 == 0) t/=2 , ans++ ; 
    // while(t%3 == 0) t/=3 , ans++ ; 

    // cout << (t==1 ? ans : -1) ; 

    return 0 ; 
}