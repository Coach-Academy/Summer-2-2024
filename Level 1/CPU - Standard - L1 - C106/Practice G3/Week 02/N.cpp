#include <bits/stdc++.h>

using namespace std ; 

int main(){
    char d1 , d2 , d3 ; 
    cin >> d1 >> d2 >> d3 ;

    if(d1==d2 && d1==d3 && d1=='R') cout << 3 ; 
    else if((d1==d2 && d1=='R') || (d2==d3 && d2=='R')) cout << 2 ; 
    else if(d1=='R' || d2=='R' || d3=='R') cout << 1 ; 
    else cout << 0 ; 
    
    return 0 ; 
}