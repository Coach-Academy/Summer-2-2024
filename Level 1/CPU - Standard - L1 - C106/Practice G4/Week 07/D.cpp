#include<bits/stdc++.h>

#define ll long long
using namespace std ; 


int main(){
    ll n ; 
    cin >> n ; 

    // ll sum = 0 ; 

    // // time complexity : O(n)
    // for(int i=1 ; i<=n ; ++i){
    //     int x = i%2 ? -1*i : i ;
    //     sum +=x ;  
    // }
    // cout << sum ; 

    cout << (n%2 ? (-n/2)-1 : n/2) ; 

    return 0 ; 
}

// time complexity : O(1)
// space complexity : O(1)

