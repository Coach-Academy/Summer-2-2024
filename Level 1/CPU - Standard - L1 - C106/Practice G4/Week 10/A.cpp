#include<bits/stdc++.h>

using namespace std ; 


int main(){
    string s ; 
    cin >> s ; 
    set<char> st(s.begin() , s.end()) ; 

    cout << (st.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") ; 
    return 0 ; 
}