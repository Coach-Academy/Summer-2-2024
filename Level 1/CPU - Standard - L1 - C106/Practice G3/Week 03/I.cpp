#include <bits/stdc++.h>

using namespace std ; 

int main(){
    // solution 1
    // int n ; 
    // cin >> n ; 

    // int currentLevel = 1 , levels = 0 , i=2; 

    // while(n>=currentLevel){
    //     levels ++ ; 
    //     n -= currentLevel ;
    //     currentLevel += i ; 
    //     i++ ;  
    // }

    // cout << levels ; 

    //solution 2
    int n ; cin >> n ;

    int currentLevel = 1 , levels= 0; 

    // sum 1 to n (n*(n+1)/2)
    while(n>=currentLevel*(currentLevel+1)/2){
        levels ++ ; 
        n -= (currentLevel*(currentLevel+1)/2) ; 
        currentLevel++ ; 
    }
    
    cout << levels ; 

    return 0 ; 
}