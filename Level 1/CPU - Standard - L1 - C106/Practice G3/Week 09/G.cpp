#include<bits/stdc++.h>

using namespace std ; 

int main(){
    string s ; 
    cin >> s ; 
    stack<int> stk ; 

    for(auto &i : s){ 
        if(stk.empty()) stk.push(i) ; 
        else if(stk.top() == i) stk.pop() ; 
        else stk.push(i) ; 
    }

    cout << (stk.empty() ? "Yes" : "No") ; 

    return 0 ; 
}

