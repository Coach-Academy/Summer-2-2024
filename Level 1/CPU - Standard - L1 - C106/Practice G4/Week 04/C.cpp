#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int grid[5][5] ; 
    int r , c ; 

    for(int i=0 ; i<5 ; ++i){
        for(int j=0 ; j<5 ; ++j){
            cin >> grid[i][j] ; 

            if(grid[i][j]==1){
                r = i + 1 ;
                c = j + 1 ; 
            }
        }
    }

    cout << abs(3-r) + abs(3-c) ; 


    return 0 ; 
}