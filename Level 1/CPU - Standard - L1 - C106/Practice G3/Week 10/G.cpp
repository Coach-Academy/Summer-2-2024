#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    vector<string> v(n) ; 
    for(auto &s : v) cin >> s ; 

    map<string , bool> mp ; 
    for(int i=n-1 ; i>=0 ; --i){
        if(mp[v[i]]) continue;
        cout << v[i] << "\n" ; 
        mp[v[i]] = true ; 
    }
    return 0 ; 
}