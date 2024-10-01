#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    ll n ; 
    cin >> n ; 

    if(n%2){
        cout << (-n/2)-1 ; 
    }
    else{
        cout << n/2 ; 
    }
    
    return 0 ; 
}

// time complexity : O(1) 
// space complexity : O(1)