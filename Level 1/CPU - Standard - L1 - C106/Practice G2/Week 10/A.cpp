#include<bits/stdc++.h>

using namespace std ;


int main(){
    string s;  
    cin >> s; 
    set<char> st(s.begin() , s.end()) ; 
    // for(auto &i : st) st.insert(i) ;

    cout << (st.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!" ) ;
    return 0 ; 
}