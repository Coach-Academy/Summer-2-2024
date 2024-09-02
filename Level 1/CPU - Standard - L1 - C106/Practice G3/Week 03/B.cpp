#include <bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    //solution 1 
    int x ; 
    for(int i=0 ; i<26 ; ++i){
        cin >> x ;
        cout << char('a'+x-1) ; 
    }

    
    return 0 ; 
}