#include<bits/stdc++.h>

#define ll long long
using namespace std ; 

int main(){
    int n ; 
    cin >> n ;

    ll arr[n] , sum = 0 ; 
    for(int i=0 ; i<n ; ++i){ // n
        cin >> arr[i] ; 
        sum += arr[i] ; 
    }
    ll x ; 
    cin >> x ; 

    ll copies = x / sum ; 
    sum = copies * sum ; 
    ll k = copies * n ; 

    for(int i=0 ; i<n ; ++i){ // n
        if(sum>x){
            break;
        }
        sum += arr[i] ; 
        k++ ; 
    }

    cout << k ; 

    return 0 ; 
}

// time complexity : O(n)
// space complexity : O(n)

