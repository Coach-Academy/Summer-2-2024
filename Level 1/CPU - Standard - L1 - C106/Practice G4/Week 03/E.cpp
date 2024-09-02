#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; cin >> n ; 
    int solved = 0 ; 


    for(int i=0 ; i<n ; ++i){ // 0 -> 1 -> 2 
        // int cnt = 0 , x ; 
        // for(int j=0 ; j<3 ; ++j){
        //     cin >> x; 
        //     cnt += x ; 
        // }
        // if(cnt > 1) solved++ ; 
        int x , y , z ; 
        cin >> x >> y >> z ; 
        if((x+y+z)>1) solved++;
        
    }

    cout << solved ; 
    return 0 ; 
}