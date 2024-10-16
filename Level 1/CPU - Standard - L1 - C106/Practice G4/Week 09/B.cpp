#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int q ; 
    cin >> q ; 

    stack<int> stk ; 
    int op , x ; 

    while(q--){
        cin >> op ;
        if(op==1){
            cin >> x ; 
            stk.push(x) ; 
        }
        else if(op==2){
            if(!stk.empty()){
                stk.pop() ; 
            }
        } 
        else{
            if(stk.empty()) cout << "Empty!" ; 
            else cout << stk.top() ; 
            cout << "\n" ; 
        }

    }
    return 0 ; 
}

