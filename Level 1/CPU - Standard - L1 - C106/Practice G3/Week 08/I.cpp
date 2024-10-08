#include<bits/stdc++.h>

using namespace std ; 


int main(){
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t ; 
    cin >> t ; 
    
    while(t--){
        int n ; 
        cin >> n ; 
        vector<int> pos(n+1) , v(n) ; 

        for(int i=0 ; i<n ; ++i){
            cin >> v[i] ;

            pos[v[i]] = i ;  
        }

        int last = n ; 

        for(int i=n ; i>=1 ; --i){

            for(int j=pos[i] ; j<last ; ++j){
                cout << v[j] << " " ; 
            }

            last = min(last , pos[i]) ; 
        }

        cout << "\n" ; 
    }

}