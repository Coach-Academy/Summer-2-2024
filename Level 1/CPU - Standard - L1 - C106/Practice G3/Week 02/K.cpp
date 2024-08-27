#include <bits/stdc++.h>

using namespace std ; 

int main(){
    long long n , k ; 
    cin >> n >> k ; 

    long long odds = (n+1)/2 ; // ceil(x , y) = (x+(y-1)) / y

    if(k <= odds){
        cout << k * 2 - 1 ; 
    }
    else{
        k -= odds ; //  odds , evens k = k - odds 
        cout <<  k * 2 ;  
    }

    return 0 ; 
}