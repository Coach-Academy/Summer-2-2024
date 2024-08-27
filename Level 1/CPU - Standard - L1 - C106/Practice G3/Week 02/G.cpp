#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int month , day ; 
    cin >> month >> day ;

    // if(month>day) cout << month - 1 ; 
    // else cout << month ; 

    // cout << (month > day ? month - 1 : month) ;  

    cout << month - (month > day) ; // 5 - 2 true (1) , false(0)

    return 0 ; 
}