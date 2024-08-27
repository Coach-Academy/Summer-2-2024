#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int a , b ; cin >> a >> b ; 
    int res1 = a+b , res2 = a-b , res3 = a*b ; 
    
    // solution 1
    // if(res1 >= res2 && res1 >= res3) cout << res1 ;
    // else if(res2 >= res1 && res2 >= res3) cout << res2 ; 
    // else cout << res3 ;

    // solutoin 2
    //cout << max(res1,max(res2 , res3)) ; // max(x,y) = max between x and y   
    cout << max({res1 , res2 , res3}) ; 
}