#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q ; 
    cin >> q ; 
    multiset<pair<int,int>> ms ; 
    map<int,bool> mp ; 
    int c = 0 , i = 1 ; 
    int m , op ; 

    while(q--){
        cin >> op ; 
        if(op==1){
            cin >> m ; 
            c++ ; 
            ms.insert({m , -c}) ; 
        }
        else if(op==2){
            while(mp[i]){
                i++ ; 
            }
            cout << i << " "; 
            mp[i] = true ; 
        }
        else{
            while(mp[-(*ms.rbegin()).second]){
                ms.erase({(*ms.rbegin()).first , (*ms.rbegin()).second}) ; 
            }

            cout << -(*ms.rbegin()).second << " "; 
            mp[-(*ms.rbegin()).second] = true ; 
        }
    }
    return 0 ; 
}