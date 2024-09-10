#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 

    int grid[n][n] ; 

    for(int i=0 ; i<n ; ++i){
        grid[0][i] = 1 ; // first row 
        grid[i][0] = 1 ; // first column
    }

    for(int i=1 ; i<n ; ++i){
        for(int j=1 ; j<n ; ++j){
            grid[i][j] = grid[i-1][j] + grid[i][j-1] ; 
        }
    }

    cout << grid[n-1][n-1] ; 
    return 0 ; 
}