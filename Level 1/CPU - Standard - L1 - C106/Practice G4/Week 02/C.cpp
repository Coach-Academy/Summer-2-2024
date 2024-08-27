#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int a , b ; cin >> a >> b ; 
    if(a>0 && !b){   // b==0 -> !b -> true 
        cout << "Gold";  
    }
    else if(b>0 && !a){
        cout << "Silver" ; 
    }
    else{
        cout << "Alloy" ; 
    }
}