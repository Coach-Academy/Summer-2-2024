#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , t; 
    cin >> n >> t ; 

    int x , y ; 

    bool test = true ;
    for(int i=0 ; i<n ; ++i){  // n
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

