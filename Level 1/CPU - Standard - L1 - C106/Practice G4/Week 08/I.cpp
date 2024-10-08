#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        int n ; 
        cin >> n ; 
        // 1 5 2 4 3
        vector<int> v(n) , idx(n+1); 
        
        for(int i=0 ; i<n ; ++i){
            cin >> v[i] ; 
            idx[v[i]] = i ; 
        }

        int top = n ; 
        for(int i=n ; i>=1 ; --i){
            for(int j=idx[i] ; j<top ; ++j){
                cout << v[j] << " " ; 
            }
            top = min(top , idx[i]) ; 
        }
        cout << "\n" ; 
    }
    return 0 ; 
}