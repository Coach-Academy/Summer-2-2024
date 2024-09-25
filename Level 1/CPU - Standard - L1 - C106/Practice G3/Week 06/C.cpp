#include <bits/stdc++.h>

#define ll long long

using namespace std ; 

void reverseStr(string &s){
    int n = s.size() ;
    for(int i=0 ; i<n/2 ; ++i){
        swap(s[i] , s[n-i-1]) ;
    }
}

void solve(){
    string s1 , s2 ;
    cin >> s1 >> s2 ; 
    reverseStr(s1) ; 

    cout << (s1 == s2 ? "YES" : "NO") ; 
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