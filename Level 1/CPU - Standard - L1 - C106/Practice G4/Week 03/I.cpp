#include <bits/stdc++.h>

using namespace std ; 

int main(){
    //solution 1
    // int cubes ; 
    // cin >> cubes ; 

    // int currentLevel = 0 ; 

    // //sum 1 to n = 1 + 2 + 4 + .. + n = n*(n+1)/2

    // while(cubes >= currentLevel*(currentLevel+1)/2){
    //     cubes -= currentLevel*(currentLevel+1)/2 ;  
    //     currentLevel++ ; 
    // } 

    // cout << currentLevel  ; 

    //solution 2
    int cubes ; 
    cin >> cubes ;

    int numOfCubes = 0 , i = 1 ;
    while(cubes >= numOfCubes){
        cubes -= numOfCubes ; 
        numOfCubes += i ;
        i++; 
    }

    cout << i-1 ;

    return 0 ; 
}