#include <bits/stdc++.h> 

using namespace std ; 

int main(){ 
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        string s ; 
        cin >> s ; 

        sort(s.begin() , s.end()) ; 

        bool isDivrse = true ; 
        for(int i=0 ; i<(int)s.size()-1 ; ++i){  // abc
            if(abs(s[i]-s[i+1])!=1){
                isDivrse = false ; 
                break; 
            }
        }

        cout << (isDivrse ? "Yes" : "No") << "\n"; 
    }
    return 0 ;
}

