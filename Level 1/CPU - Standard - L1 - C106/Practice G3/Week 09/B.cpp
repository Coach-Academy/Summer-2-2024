#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ;
    int op , n ; 
    stack<int>stk ; 
    while(t--){
        cin >> op ;

        if(op==1){
            cin >> n ; 
            stk.push(n) ; 
        }
        else if(op==2){
            if(!stk.empty()){
                stk.pop() ; 
            }
        }
        else{
            if(stk.empty()){
                cout << "Empty!";  
            }
            else{
                cout << stk.top() ; 
            }
            cout << "\n" ; 
        }
    }
    return 0 ; 
}

