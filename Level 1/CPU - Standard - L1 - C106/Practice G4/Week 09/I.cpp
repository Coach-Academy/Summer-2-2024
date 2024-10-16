#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    
    int q ; 
    cin >> q; 
    queue<int> qu ; 
    priority_queue<int , vector<int> , greater<int>> pq ; 
    int op , x ;

    while(q--){
        cin >>  op ; 

        if(op==1){
            cin >> x ;
            qu.push(x) ; 
        }
        else if(op==2){
            if(pq.empty()){
                cout << qu.front() << "\n" ; 
                qu.pop() ; 
            }
            else{
                cout << pq.top() << "\n" ; 
                pq.pop() ; 
            }
        }
        else{
            while(!qu.empty()){
                pq.push(qu.front()) ; 
                qu.pop() ; 
            }
        }
    }
    return 0 ; 
}

