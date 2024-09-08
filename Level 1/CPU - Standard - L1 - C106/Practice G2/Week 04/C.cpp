#include<bits/stdc++.h>

using namespace std ; 

int main(){
    int grid[5][5] ; 
    for(int i=0 ; i<5 ; ++i){
        for(int j=0 ; j<5 ; ++j){
            cin >> grid[i][j] ; 
        }
    }

    for(int i = 0 ; i < 5 ; ++i){
        for(int j = 0 ; j < 5 ; ++j){
            if(grid[i][j]==1){
                cout << abs(i-2) + abs(j-2) ;
                break;
            }
        }
    }
    
    return 0 ; 
}