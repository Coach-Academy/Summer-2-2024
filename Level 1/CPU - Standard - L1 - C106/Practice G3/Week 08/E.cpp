#include<bits/stdc++.h>

using namespace std ; 


int main(){
    int n ; 
    cin >> n ;
    vector<int> v(n) ; 
    for(auto &i : v) cin >> i ; 

    vector<int> ans ; 

    for(int i=0 ; i<n-1 ; ++i){
        if(v[i+1]==1) ans.push_back(v[i]) ; 
    }

    ans.push_back(v[n-1]) ; 

    cout << ans.size() << "\n" ; 

    for(auto i : ans) cout << i << " " ; 

}