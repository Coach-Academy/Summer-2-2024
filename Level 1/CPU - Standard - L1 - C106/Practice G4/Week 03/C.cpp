#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n , x , y , ans = 0 ; 
    cin >> n ; 
    
    while(n--){
        cin >> x >> y ; 
        // if(y-x>=2) ans++ ;
        ans += (y-x>=2) ; 
    }

    cout << ans ; 
    return 0 ; 
}