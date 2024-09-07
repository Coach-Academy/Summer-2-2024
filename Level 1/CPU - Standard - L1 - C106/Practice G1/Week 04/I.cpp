#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int grid[3][3] , lights[3][3]; 
    for(int i=0 ; i<3 ; ++i){
        for(int j=0 ; j<3 ; ++j){
            cin >> grid[i][j] ; 
        }
    }

    for(int i=0 ; i<3 ; ++i){
        for(int j=0 ; j<3 ; ++j){
            lights[i][j] = grid[i][j] ; 
            if(i-1>=0) lights[i][j] += grid[i-1][j] ; // top side
            if(j-1>=0) lights[i][j] += grid[i][j-1] ; // left side
            if(i+1<3) lights[i][j] += grid[i+1][j] ; // bottom side
            if(j+1<3) lights[i][j] += grid[i][j+1] ; // right side
        }
    }

    for(int i=0 ; i<3 ; ++i){
        for(int j=0 ; j<3 ;  ++j){
            lights[i][j] ++ ; 
            lights[i][j] %= 2 ; 
            cout << lights[i][j] ; 
        }

        cout << "\n" ; 
    }
    
    return 0 ; 
}