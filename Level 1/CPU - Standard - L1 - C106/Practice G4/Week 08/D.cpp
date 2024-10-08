#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    vector<int> pos(n);  
    string dir ; 

    cin >> dir ; 

    for(auto &i : pos) cin >> i ; 

    int ans = 1e9 ; 
    for(int i=0 ; i<n-1 ; ++i){
        if(dir[i]=='R' && dir[i+1]=='L' && pos[i] <= pos[i+1]){
            ans = min(ans , (pos[i+1]-pos[i])/2) ; 
        }
    }

    cout << (ans == 1e9 ? -1 : ans) ; 
    return 0 ; 
}