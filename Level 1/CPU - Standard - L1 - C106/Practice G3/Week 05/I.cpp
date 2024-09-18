#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    string s ; 
    cin >> s ; 
    for(int i=0 ; i<n ; ++i){
        // s[i] = toupper(s[i]) ; 
        s[i] = tolower(s[i]) ; 
    }

    sort(s.begin() , s.end()) ; 

    int letters = 1 ; 
    for(int i=0 ; i<n-1 ; ++i){
        if(s[i]!=s[i+1]) letters ++ ; 
    }

    cout << (letters!=26 ? "NO" : "YES") ;
     
    return 0 ; 
}