#include<bits/stdc++.h>

using namespace std ; 

bool isAlpha(char c){
    return (c>='a' && c<='z') ; 
}

int main(){
    string s ; 
    getline(cin , s) ;

    set<char>st; 
    for(auto &i : s){
        if(isAlpha(i)){
            st.insert(i) ; 
        }
    }

    cout << st.size() ; 
    return 0 ; 
}