#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n , solved=0 ; 
    cin >> n ; 
    
    for(int i=0 ; i<n ;++i){
        int cnt = 0 , x; 
        for(int j=0 ; j<3 ; ++j){
            cin >> x ; 
            cnt += x ; 
        }
        if(cnt > 1) solved ++ ; 
    }

    cout << solved ; 
    return 0 ; 
}