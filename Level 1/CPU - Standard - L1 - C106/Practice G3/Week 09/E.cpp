#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n , m ; 
    cin >> n >> m ;

    vector<int> values(n) ; 
    queue<int> q ; 
    for(int i=0 ; i<n ; ++i){
        cin >> values[i] ; 
        q.push(i+1) ; 
    } 

    while(q.size()!=1){
        int num = q.front() ; 
        if(values[num-1]<=m){
            q.pop(); 
        }
        else{
            values[num-1] -= m ; 
            q.push(q.front()) ; 
            q.pop() ; 
        }
    }

    cout << q.front() ; 


    return 0 ; 
}

