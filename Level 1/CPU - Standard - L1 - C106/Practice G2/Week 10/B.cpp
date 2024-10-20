#include<bits/stdc++.h>

using namespace std ;

bool isChar(char c){
    return (c>='a' && c<='z') ; 
}

int main(){
    // string s ; 
    // getline(cin , s) ; 
    // set<char> st ; 
    // for(auto &i : s){
    //     if(isChar(i)){
    //         st.insert(i) ; 
    //     }
    // }

    // cout << st.size() ; 

    char c ;
    set<char>st ; 
    while(cin >> c){
        if(isChar(c)) st.insert(c) ; 
    } 
    cout << st.size() ; 
    return 0 ; 
}