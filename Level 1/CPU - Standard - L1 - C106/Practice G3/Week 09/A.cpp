#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t ; 
    cin >> t ;
    int op , n ; 
    queue<int>q ; 
    while(t--){
        cin >> op ;

        if(op==1){
            cin >> n ; 
            q.push(n) ; 
        }
        else if(op==2){
            if(!q.empty()){
                q.pop() ; 
            }
        }
        else{
            if(q.empty()){
                cout << "Empty!";  
            }
            else{
                cout << q.front() ; 
            }
            cout << "\n" ; 
        }
    }
    return 0 ; 
}

