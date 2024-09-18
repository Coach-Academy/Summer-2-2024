#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 
        string ans = "" ; 
        // ans.push_back(s[0]) ; 
        ans += s[0] ; 

        for(int i=1 ; i<s.size() ; i+=2){
            // ans.push_back(s[i]) ; 
            ans += s[i] ; 
        }

        cout << ans << "\n" ; 
    }
    return 0 ; 
}