#include <bits/stdc++.h>

using namespace std ; 

int main(){
    long long n , m , a ; 
    cin >> n >> m >> a ; 
    // ceil(n/a) * ceil(m/a) 
    cout << ((n+(a-1)) / a) * ((m+(a-1)) / a) ; // (x/y) + (x%y!=0)
    return 0 ; 
}