#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int q ; 
    cin >> q ; 

    queue<int> qu ; 
    int op , x ; 

    while(q--){
        cin >> op ;
        if(op==1){
            cin >> x ; 
            qu.push(x) ; 
        }
        else if(op==2){
            if(!qu.empty()){
                qu.pop() ; 
            }
        } 
        else{
            if(qu.empty()) cout << "Empty!" ; 
            else cout << qu.front() ; 
            cout << "\n" ; 
        }

    }
    return 0 ; 
}

