#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int k , x ; 
    cin >> k >> x ; 

    // if(k*500>=x) cout << "Yes" ; 
    // else cout << "No" ; 
    // cout << (k*500 >= x ? "Yes" : "No") ;

    cout << ((x*1.0)/k <= 500 ? "Yes" : "No") ;  
    return 0 ; 
}