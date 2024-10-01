#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , t , x , y ; 
    cin >> n >> t ; 

    bool test = true ; 
    for(int i=0 ; i<n ; ++i){
        cin >> x >> y ; 
        if(x==t || 7-x==t || y==t || 7-y==t){
            test = false ;
        }
    }

    cout << (test ? "YES" : "NO") ; 
    
    return 0 ; 
}

// time complexity : O(n) 
// space complexity : O(1)