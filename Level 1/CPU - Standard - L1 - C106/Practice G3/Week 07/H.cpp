#include<bits/stdc++.h>

using namespace std ; 

bool isPal(string s){
    int l = 0 , r = s.size() - 1 ; 

    while(l<r){ // n/2
        if(s[l]!=s[r]) return false ; 
        l++ , r-- ; 
    }

    return true ; 
}

int main(){
    string s ;
    cin >> s; 

    while(s.back() == '0') s.pop_back() ; 
    cout << (isPal(s) ? "Yes" : "No") ; 
    
    return 0 ; 
}

// time complexity : O(n) 
// space complexity : O(n)