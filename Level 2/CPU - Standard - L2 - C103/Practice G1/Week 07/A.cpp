#include <bits/stdc++.h>

using namespace std ; 

bool isOptained(vector<int> &bars , int idx , int currSum , int n){
    //base case
    if(idx>=bars.size()){
        return (currSum==n) ; 
    }

    // recursive call

    return isOptained(bars , idx+1 , currSum , n) || isOptained(bars , idx+1 , currSum+bars[idx] , n) ; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t ; 
    cin >> t ; 
    while(t--){
        int n , p; cin >> n >> p ;
        vector<int> bars(p) ; 
        for(auto &i : bars){
            cin >> i ; 
        } 

        cout <<  (isOptained(bars , 0 , 0 , n) ? "YES" : "NO") << "\n" ; 
    }
    return 0 ; 
}