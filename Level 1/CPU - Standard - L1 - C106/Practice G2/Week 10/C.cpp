#include<bits/stdc++.h>

using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ;
    string s1 , s2 ; 
    pair<string,string> p ;  
    while(t--){
        cin >> s1 >> s2 ; 
        map<char , bool> mp ; 
        for(auto &i : s1) mp[i] = true ; 
        
        bool isShared = false ; 
        for(auto &i : s2){
            if(mp[i]){
                isShared = true ;
                break;
            }
        }

        cout << (isShared ? "YES" : "NO") << "\n" ; 

    } 
    return 0 ; 
}