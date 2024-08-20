#include <bits/stdc++.h>

using namespace std ;

int main(){
    double l , p , q; 
    cin >> l >> p >> q ; 
    double t1 = l / (p+q) ; 
    double x = p * t1 ; 
    cout << fixed << setprecision(4) << x ; 
    return 0 ; 
}