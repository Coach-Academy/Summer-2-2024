#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int a , b , c ; 
    cin >> a >> b >> c ;

    // if(a>b) cout << "Takahashi" ; 
    // else if(a<b) cout << "Aoki" ; 
    // else{
    //     if(c==0) cout << "Aoki" ; 
    //     else cout << "Takahashi" ; 
    // }

    if(a>b || (a==b && c==1)) cout << "Takahashi" ; 
    else  cout << "Aoki" ; 

    return 0 ; 
}