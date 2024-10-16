#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , d ; 
    cin >> n >> d ; 

    queue<int> q ; 
    int x ; 

    while(n--){
        cin >> x ; 
        q.push(x) ; 
    }

    while(d--){
        q.push(q.front()) ; 
        q.pop() ; 
    }

    while(!q.empty()){
        cout << q.front() << " " ; 
        q.pop() ; 
    }
    return 0 ; 
}

