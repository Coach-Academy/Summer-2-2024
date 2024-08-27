#include <bits/stdc++.h>

using namespace std ; 

int main(){
    // solution 1
    // char n1 , n2 , n3 ; 
    // cin >> n1 >> n2 >> n3 ; 

    // if(n1==n3) cout << "Yes" ; 
    // else cout << "No" ; 

    // solution 2
    int n ; 
    cin >> n ; 
    // n = 235 % 10 = 
    // n = 2.3500 / 100 = 2 
    if(n%10 == n/100){
        cout << "Yes" ; 
    }
    else{
        cout << "No" ; 
    }
    
    return 0 ; 
}