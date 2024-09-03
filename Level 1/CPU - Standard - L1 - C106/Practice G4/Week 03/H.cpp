#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int x ;

    //rows
    for(int i=1 ; i<=5 ; ++i){
        //cols
        for(int j=1 ; j<=5 ; ++j){
            cin >> x ; 
            if(x==1){
                cout << abs(i-3) + abs(j-3) ; 
            }
        }
    } 
    return 0 ; 
}