#include <bits/stdc++.h>

using namespace std ;

int main(){
    int n ; 
    cin >> n ; 

    int bills = 0 ; 
    // 100 , 20 , 10 , 5 , 1
    bills += (n/100) ; // x += y -> x = x + y  // bills = bills + (n/100)
    n %= 100 ;  // n = n % 100 
    bills += (n/20) ; 
    n %=20 ; 
    bills += (n/10) ; 
    n %=10 ; 
    bills += (n/5) ; 
    n %=5 ;

    bills += n ;

    cout << bills ;   

    return 0 ; 
}