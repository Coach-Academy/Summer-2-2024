#include <bits/stdc++.h>

using namespace std ; 

int main (){
    double l , p , q; 
    cin >> l >> p >> q ; 

    double t1 = l / (q+p) ; 

    cout << fixed << setprecision(4) << p * t1 ; 

    return 0 ; 
}