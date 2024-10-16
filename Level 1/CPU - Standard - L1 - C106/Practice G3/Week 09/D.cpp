#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s; 

        stack<char> stk ; 
        for(auto &i : s){
            if(i=='(' || i=='{' || i=='['){
                stk.push(i) ; 
            }
            else{
                if(i=='}'){
                    if(!stk.empty() &&stk.top()=='{'){
                        stk.pop() ; 
                    }
                    else{
                        stk.push(i) ; 
                        break;
                    }
                }
                else if(i==')'){
                    if(!stk.empty() && stk.top()=='('){
                        stk.pop() ; 
                    }
                    else{
                        stk.push(i) ; 
                        break;
                    }
                }
                else{
                    if(!stk.empty() && stk.top()=='['){
                        stk.pop() ; 
                    }
                    else{
                        stk.push(i) ;
                        break;
                    }
                }
            }
        }

        cout << (stk.empty() ? "YES" : "NO") << "\n" ; 
    }
    return 0 ; 
}