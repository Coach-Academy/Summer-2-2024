#include<bits/stdc++.h>

using namespace std ; 


int main(){
    int n , m; 
    cin >> n >> m; 
    vector<int> v(n) ;
    deque<int> dq ;  

    for(int i=0 ; i<n ; ++i){
        cin >> v[i] ;
        dq.push_back(i+1) ;  
    }

    while(dq.size()!=1){
        if(v[dq.front()-1] <= m){
            dq.pop_front() ; 
        }
        else{
            v[dq.front()-1] -= m ; 
            dq.push_back(dq.front()) ;
            dq.pop_front() ; 
        }
    }

    cout << dq.front() ; 
}