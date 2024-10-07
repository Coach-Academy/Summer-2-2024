#include <bits/stdc++.h>

using namespace std ; 
vector<int> current(8) , validState(8) ;
int ans = 1e9 ; 

bool isValid(int r , int c){
    for(int i=0 ; i<c ; ++i){
        if(r == validState[i] || abs(r - validState[i]) == abs(c- i)){
            return false ; 
        }
    }

    return true ; 
}

int countMoves(){
    int cnt = 0 ; 
    for(int i=0 ; i<8 ; ++i){
        if(current[i] != validState[i]){
            cnt ++ ; 
        } 
    }

    return cnt ; 
}

void build(int c){
    // base case
    if(c==8){
        ans = min(ans , countMoves()) ; 
        return ; 
    }

    //back tracking
    for(int r=1 ; r<=8 ; ++r){
        if(isValid(r , c)){
            validState[c] = r ;
            build(c+1) ; 
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1 ; 
    while(cin >> current[0]){
        for(int i=1 ; i<8 ; ++i){
            cin >> current[i] ; 
        }

        build(0) ; 
        
        cout << "Case " << t << ": " << ans << "\n"; 
        ans = 1e9 ; 
        t++ ; 
    }


    return 0 ; 
}