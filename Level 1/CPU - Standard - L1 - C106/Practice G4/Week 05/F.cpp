#include <bits/stdc++.h> 

using namespace std ; 

int main(){ 
    string s ; 
    cin >> s; 

    while(s.back()=='0') s.pop_back() ; 
    int n = s.size() ; 

    // bool isPal = true ;
    // for(int i=0 ; i<n/2 ; ++i){
    //     if(s[i] != s[n-i-1]){
    //         isPal = false ; 
    //         break; 
    //     }
    // }

    // cout << (isPal ? "Yes" : "No") ; 

    string rev = s ; 
    reverse(rev.begin() , rev.end()) ; 
    cout << (s == rev ? "Yes" : "No") ; 
    return 0 ;
}

