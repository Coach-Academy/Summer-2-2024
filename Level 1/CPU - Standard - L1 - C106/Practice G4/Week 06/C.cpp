#include<bits/stdc++.h>

#define ll long long

using namespace std ; 

void reverseString(string &s){
    int n = s.size() ; 
    
    for(int i=0 ; i<n/2 ; ++i){
        swap(s[i] , s[n-i-1]) ; 
    }
}

int main(){
    string s1 , s2 ; 
    cin >> s1 >> s2 ; 

    // reverse(s1.begin() , s1.end())  ; 

    reverseString(s1) ; 

    cout << (s1==s2 ? "YES" : "NO") ; 

    return 0 ; 
}