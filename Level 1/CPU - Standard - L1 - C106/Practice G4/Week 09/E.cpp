#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , m ; 
    cin >> n >> m ; 

    vector<int> v(n) ; 
    queue<int> q ; 
    for(int i=0 ; i<n ; ++i){
        cin >> v[i] ; 
        q.push(i+1) ; 
    }

    while(q.size()!=1){
        int idx = q.front() - 1 ; 
        q.pop() ; 
        if(v[idx]>m){
            v[idx] -=m ; 
            q.push(idx+1) ; 
        }
    }

    cout << q.front() ; 
    return 0 ; 
}

