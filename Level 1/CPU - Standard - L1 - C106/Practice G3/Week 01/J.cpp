#include <bits/stdc++.h>

using namespace std ;

int main(){
    int x ; cin >> x ; 
    cout << x / 5 + (x%5 != 0) ; // x % 5 = [0 , 4] 
    // true + true -> 1 + 1 -> false + true -> 0 + 1 
    // double x ; cin >> x ; 
    // cout << ceil(x/5) ;
    return 0 ; 
}