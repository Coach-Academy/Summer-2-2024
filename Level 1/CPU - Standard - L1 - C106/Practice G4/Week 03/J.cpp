#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n , x; cin >> n ;
    int g1 = 0 , g2 = 0 , g3 = 0 , g4 = 0 ; 

    while(n--){
        cin >> x ; 
        if(x==1) g1++ ; 
        if(x==2) g2++ ; 
        if(x==3) g3++ ; 
        if(x==4) g4++ ; 
    } 

    int taxi = g4 + g3 ;

    // if(g1>g3) g1-=g3 ; 
    // else g1 = 0 ; 
    g1 = max(g1-g3 , 0) ; 

    g2 *= 2 ; 
    g2 += g1 ; 

    //explain :  ceil(x/y) = (x + (y-1)) / y
    taxi += ((g2+(3)) / 4) ; 

    cout << taxi ; 

    return 0 ; 
}