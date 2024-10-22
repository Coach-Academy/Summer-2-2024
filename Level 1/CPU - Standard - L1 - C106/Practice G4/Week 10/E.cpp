#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ;
    string name ; 
    map<string , int> mp ;  
    while(t--){
        cin >> name ; 
        if(mp[name]==0){
            cout << "OK" ; 
        }
        else{
            cout << name << mp[name] ; 
        }

        mp[name] ++ ; 
        cout << "\n" ; 
    }
    return 0 ; 
}