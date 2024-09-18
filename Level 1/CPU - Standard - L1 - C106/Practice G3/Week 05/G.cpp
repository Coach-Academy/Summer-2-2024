#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n , k , good = 0; 
    cin >> n >> k ; 
    while(n--){
        string num ; 
        cin >> num ; 

        // number of digits not less than k
        if(num.size()<k+1) continue;


        // all (0 to k) digit exist 
        int visit[10] = {0} ; 

        for(int i=0 ; i<num.size() ; ++i){
            int x = num[i] - '0' ; 
            visit[x] = 1 ; 
        } 

        bool isGood = true ; 
        for(int i=0 ; i<=k ; ++i){ // 0 -> k
            if(visit[i] == 0){
                isGood = false ; 
                break; 
            }
        }
        if(isGood) good ++ ; 
    }

    cout << good ; 
    return 0 ; 
}