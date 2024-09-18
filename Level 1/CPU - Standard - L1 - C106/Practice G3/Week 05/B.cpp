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

        if(s.size()>10){
            cout << s.front() << s.size()-2 << s.back() ; 
        }
        else{
            cout << s ; 
        }

        cout << "\n" ; 
    }
    return 0 ; 
}