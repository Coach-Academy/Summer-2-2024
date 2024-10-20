#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ; 
    cin >> n ; 
    vector<string> v(n) ; 
    for(auto &i : v) cin >> i ; 

    map<string , int> mp; 

    for(int i=n-1 ; i>=0 ; --i){
        if(mp[v[i]]==1) continue;
        cout << v[i] << "\n" ; 
        mp[v[i]] = 1 ; 
    }
    
    return 0 ; 
}