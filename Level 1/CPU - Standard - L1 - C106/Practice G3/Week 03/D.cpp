#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ;
    int x = 0 ; 
    string op ;
    while(n--){
        cin >> op ; 
        if(op=="X++" || op=="++X") x++ ; 
        else x-- ; 
    }
    cout << x ; 
    return 0 ; 
}