#include<bits/stdc++.h>

using namespace std ; 

int main(){
    string s ;
    cin >> s; 

    stack<char> stk ; 

    for(auto &i : s){
        if(stk.empty()) stk.push(i) ; 
        else if(i==stk.top()) stk.pop() ; 
        else stk.push(i) ;  
    }

    cout << (stk.empty() ? "Yes" : "No") ; 
    return 0 ; 
}

