#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    string op ;
    int x = 0 ;
    while(n--){
        cin >> op ; 
        if(op=="++X" || op=="X++") x++ ; 
        else x-- ; 
    }

    cout << x ; 
    return 0 ; 
}