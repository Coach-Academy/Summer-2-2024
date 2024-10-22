#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        int n , r ; 
        cin >> n >> r ; 
        vector<int>v(n) ; 
        for(auto &i : v) cin >> i ; 
        // sort(v.begin() , v.end() , greater<int>()) ;
        // sort(v.rbegin() , v.rend()) ;
        set<int , greater<int>> st(v.begin() , v.end()) ; 
        // for(auto &i : v) st.insert(i) ; 

        int w = 0 ; 

        for(auto &i : st){
            if(i-w*r <= 0){
                continue;
            }
            else{
                w++ ; 
            }
        }

        cout << w << "\n" ; 
    }
    return 0 ; 
}