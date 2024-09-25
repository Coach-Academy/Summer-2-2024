#include <bits/stdc++.h>

using namespace std ; 


void solve(){
    int n ; 
    cin >> n ; 
    int p[n] , q[n] , ordered[n]; 

    for(int i=0 ; i<n ; ++i){
        cin >> p[i] ; 
    }

    for(int i=0 ; i<n ; ++i){
        cin >> q[i] ; 
    }

    for(int i=1 ; i<=n ; ++i){
        ordered[i-1] = i ; 
    }

    int a = -1 , b = -1 , cnt = 0; 

    do{
        cnt ++ ; 
        int ts1 = 1 , ts2 = 1 ; 
        for(int i=0 ; i<n ; ++i){
            if(p[i]!=ordered[i]) ts1 = 0 ; 
            if(q[i]!=ordered[i]) ts2 = 0 ; 
        }

        if(ts1==1) a = cnt ;

        if(ts2==1) b = cnt ;  
    }while(next_permutation(ordered , ordered+n));

    cout << abs(a-b) ; 

}

int main(){
    int t = 1 ; 
    // cin >> t ; 

    while(t--){
        solve() ; 
        cout << "\n" ; 
    }

    return 0 ; 
}