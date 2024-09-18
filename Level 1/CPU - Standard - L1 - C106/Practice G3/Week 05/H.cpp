#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 

        sort(s.begin() , s.end()) ; 

        bool isDiverse = true ; 

        for(int i=0 ; i<s.size()-1 ; ++i){
            // abs(s[i]-s[i+1]) > 1 || abs(s[i]-s[i+1]) ==0
            if(abs(s[i] - s[i+1])!=1){
                isDiverse = false ; 
                break;
            }
        }

        cout << (isDiverse ? "YES" : "NO") << "\n" ; 
    }
    return 0 ; 
}