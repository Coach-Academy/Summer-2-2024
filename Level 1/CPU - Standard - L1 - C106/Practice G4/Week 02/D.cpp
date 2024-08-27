#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int w ; 
    cin >> w ; 

    // w%2==0 && n<2
    if(w%2 || w==2) cout << "No" ; 
    else cout << "Yes" ; 

    // x % y = [0 , y-1] 
    // c % 2 = [0 , 1] 0 -> false , any number -> true 

    // if(w%2) cout << "odd" ; 
    // else cout << "even" ; 
}