#include <bits/stdc++.h>
using namespace std ; 

int main (){
    int n ; 
    cin >> n ; 
    int bills = 0 ; 

    bills += n/100 ; /// bills = bills + (n/100)
    n %= 100 ;   // n = n % 100 

    bills += n/20 ;
    n %= 20 ; 

    bills += n/10 ;
    n %= 10 ; 

    bills += n/5 ;
    n %= 5 ;  // x % y = [0 , y-1]

    bills += n ;  

    cout << bills ; 
    
    return 0 ; 
}