#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n ; 
    cin >> n ; 
    string s ; 
    map<string , int> mp ; 
    while(n--){
        cin >> s ; 
        if(mp[s]==0){
            cout << "OK" ; 
        }
        else{
            cout << s << mp[s] ; 
        }
        cout << "\n" ;  
        mp[s]++ ; 
    }
    return 0 ; 
}