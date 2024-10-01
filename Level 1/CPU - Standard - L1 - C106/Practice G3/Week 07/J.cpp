#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    int n ;
    cin >> n ; 
    ll arr[n] ; 
    for(int i=0 ; i<n ; ++i){
        cin >> arr[i] ; 
    }

    ll x ; 
    cin >> x;  

    ll sum = 0 ; 
    for(int i=0 ; i<n ; ++i){ // n
        sum += arr[i] ; 
    }

    ll copies = x  / sum ; // ceil(x/y) = (x+(y-1)) / y  

    ll ans = copies * n ; 

    sum = copies * sum ; 

    for(int i=0 ; i<n ; ++i){ //n
        if(sum>x){
            break;
        }
        sum+=arr[i] ; 
        ans ++ ; 
    }

    cout << ans ; 
    
    return 0 ; 
}

// time complexity : O(n) 
// space complexity : O(n)