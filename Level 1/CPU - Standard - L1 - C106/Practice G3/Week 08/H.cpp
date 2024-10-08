#include<bits/stdc++.h>

using namespace std ; 


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    
    while(t--){
        int n ; 
        cin >> n ; 
        string s ; 
        cin >> s ; 

        int cnt = 0 , ans = 0 , isAngry = 0;
        for(auto i : s){
            if(i=='A'){
                cnt = 0 ; 
                isAngry = 1 ; 
            }
            else{
                cnt ++ ; 
                if(isAngry) ans = max(ans , cnt) ; //PPAP
            }
        }
        cout << ans << "\n" ; 
    }

}