#include<bits/stdc++.h>

#define ll long long
using namespace std ; 

bool isPal(string s){
    int l=0 , r=s.size()-1 ;

    while(l<r){ // n/2 = O(n)
        if(s[l]!=s[r]) return false ; 
        l++  , r-- ; 
    } 

    return true ; 
}

int main(){
    string s ; 
    cin >> s ; 

    while(s.back()=='0') s.pop_back() ; // n

    cout << (isPal(s) ? "Yes" : "No") ; 

    return 0 ; 
}
 
// time complexity : O(n)
// space complexity : O(n)

