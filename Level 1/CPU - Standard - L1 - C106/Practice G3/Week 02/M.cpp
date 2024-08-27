#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int v , t , s , d ; 
    cin >> v >> t >> s >> d;  
    double t1 = (double)d / v ;

    // if(t1<t || t1>s){
    //     cout << "Yes" ; 
    // } 
    // else{
    //     cout << "No"  ;
    // }

    cout << ((t1<t || t1>s) ? "Yes" : "No") ; 

    return 0 ; 
}