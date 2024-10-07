#include <bits/stdc++.h>

using namespace std ; 
int n ; 
vector<vector<int>> ans ; 

bool isPrime(int num){
    if(num<2){
        return false ; 
    }

    for(int i=2 ; i*i <=num ; ++i){
        if(num%i == 0) return false ; 
    }

    return true ; 
}

void buildRing(vector<int> &ring , vector<int> &visit , int idx){
    // base case
    if(idx >=n && isPrime(ring[0]+ring[n-1])){
        ans.push_back(ring) ;
        return ; 
    }
    //backtracking
    for(int i=2 ; i<=n ; ++i){
        if(!visit[i] && isPrime(ring[idx-1] + i)){
            ring[idx] = i ; 
            visit[i] = 1 ; // do
            buildRing(ring , visit , idx+1) ; 
            visit[i] = 0 ; // undo
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1 ; 
    while(cin >> n){
        vector<int> ring(n) , visit(n+1 , 0);
        ring[0] = 1 ; 
        visit[1] = 1 ; 

        buildRing(ring , visit , 1) ; 
        cout << "Case " << t << ":\n" ; 

        for(auto &v : ans){
            for(int i=0 ; i<n ; ++i){
                cout << v[i] ; 
                if(i!=n-1) cout << " " ; 
            }
            cout << "\n" ; 
        }

        ans = vector<vector<int>>() ; 
        t++ ; 
        cout << "\n" ; 
    }


    return 0 ; 
}