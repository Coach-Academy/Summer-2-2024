#include <bits/stdc++.h> 

using namespace std ; 

int main(){ 
    int n , k ; 
    cin >> n >> k ; 
    int good = 0 ; 

    while(n--){
        string s ; 
        cin >> s ; 

        int visit[10] = {0};

        for(int i=0 ; i<s.size() ; ++i){
            int digit = s[i]-'0' ; 
            visit[digit] = 1 ; 
        } 

        bool isGood = true ; 

        for(int i=0 ; i<=k ; ++i){
            if(visit[i]==0){
                isGood = false ; 
                break; 
            }
        }

        if(isGood) good ++ ; 
    }

    cout << good ;
    return 0 ;
}

