#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ;  
    string s1 , s2 ; 
    while(t--){
        cin >> s1 >> s2 ; 

        bool isShare = false ; 

        // for(auto &i : s1){
        //     for(auto &j : s2){
        //         if(i==j){
        //             isShare = true ; 
        //             break;
        //         }
        //     }
        //     if(isShare) break;
        // }

        map<char , bool> mp ; 

        for(auto &i : s1){
            mp[i] = true ; 
        }

        for(auto &i : s2){
            if(mp[i]){
                isShare = true ; 
                break;
            }
        }

        cout << (isShare ? "YES" : "NO") << "\n"; 
    }
    return 0 ; 
}