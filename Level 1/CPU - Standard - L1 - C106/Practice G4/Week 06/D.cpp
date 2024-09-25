#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

int main(){
    int n , m ; 
    cin >> n >> m ; 
    int diff[n] ; 
    ll x , y , sum = 0 ; 

    for(int i=0 ; i<n ; ++i){
        cin >> x >> y ; 
        sum += x ; 
        diff[i] = x - y ; 
    }

    sort(diff , diff+n , greater<int>()) ; 

    for(int i=0 ; i<n ; ++i){
        if(sum<=m){
            cout << i ;
            return 0 ;  
        }

        sum -= diff[i] ; 
    }

    cout << (sum<=m ? n : -1) ; 
    return 0 ; 
}