#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; cin >> n ; 
    int toNextRank[n-1] ;
    for(int i=0 ; i<n-1 ; ++i) cin >> toNextRank[i] ;  

    int a , b ; cin >> a >> b ; 
    int ans = 0 ;

    for(int i=a-1 ; i<b-1 ; ++i){
        ans += toNextRank[i] ; 
    } 

    cout << ans ;

    return 0 ; 
}