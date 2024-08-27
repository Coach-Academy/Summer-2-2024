#include <bits/stdc++.h>

using namespace std ; 

int main(){
    long long n , m , a ; 
    cin >> n >> m >> a ; 
    // (long long)ceil((double)n/a) * (long long)ceil((double)m/a)
    // cout << ((n + (a-1)) / 2) * ((m + (a-1)) / 2) ;   
    cout << ((n/a) + (n%a!=0)) * ((m/a) + (m%a!=0)) ; 
    return 0 ; 
}