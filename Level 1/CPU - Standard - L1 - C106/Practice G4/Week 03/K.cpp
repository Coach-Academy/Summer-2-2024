#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    int isAlmostLucky = 0 ; 

    // get n divisiors 
    for(int i=1 ; i<=sqrt(n) ; ++i){
        if(n%i==0){
            int x = i , y = n/i; 
            // check i licky number or not 
            int isLucky = 1 ; 

            while(x!=0){
                if(x%10!=4 && x%10!=7){
                    isLucky = 0 ; 
                    break;
                }
                x/=10 ; 
            }

            if(isLucky==1){
                // cout << "YES" ; 
                // return 0 ; 
                isAlmostLucky = 1 ; 
            }

            isLucky = 1 ; 

            while(y!=0){
                if(y%10!=4 && y%10!=7){
                    isLucky = 0 ; 
                    break;
                }
                y/=10 ; 
            }

            if(isLucky==1){
                // cout << "YES" ; 
                // return 0 ; 
                isAlmostLucky = 1 ; 
            }
        }
    }
    // cout << "NO" ; 
    cout << (isAlmostLucky==1 ? "YES" : "NO") ; 
    return 0 ; 
}