#include <bits/stdc++.h>

using namespace std ; 

int main(){
    // solution 1
    // string s ; 
    // cin >> s ;
    // while(s.back()=='0'){
    //     s.pop_back() ; 
    // }

    // int n = s.size() ; 
    // bool isPal = true ; 
    // for(int i=0 ; i<n/2 ; ++i){
    //     if(s[i]!=s[n-i-1]){
    //         isPal = false ; 
    //         break;
    //     }
    // }

    // cout << (isPal ? "Yes" : "No") ; 

    //solution 2
    string s ; cin >> s ; 
    int zeros = 0 ; 
    int n = s.size() ; 
    for(int i=n-1 ; i>=0 ;--i){
        if(s[i]!='0'){
            break;
        }
        else{
            zeros ++ ; 
        }
    }

    while(zeros--){
        s = '0' + s; 
    }
    string rev = s ; 
    reverse(rev.begin() , rev.end()) ; 
    cout << (rev == s ? "Yes" : "No") ; 

    return 0 ; 
}