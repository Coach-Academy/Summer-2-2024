#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int x , r , c; 
    
    for(int i=1 ; i<=5 ; ++i){
        for(int j=1 ; j<=5 ; ++j){
            cin >> x ; 
            if(x==1){
                cout << abs(3-i) + abs(3-j) ; 
            }
        }
    } 

    return 0 ; 
}