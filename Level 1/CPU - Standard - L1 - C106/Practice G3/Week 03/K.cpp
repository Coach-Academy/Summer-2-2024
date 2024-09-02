#include <bits/stdc++.h>

using namespace std ; 

int main(){
    int n ; 
    cin >> n ; 
    // 1 to n
    int isAlmostLucky = 0 ; 

    for(int i=1 ; i<=sqrt(n) ; ++i){
        // check n diviasble  by i or not
        if(n%i==0){
            //check i lucky or not
            int x = i , y = n/i , isLucky = 1; 
            while(x!=0){
                if(x%10!=4 && x%10!=7){
                    isLucky = 0 ; 
                    break;
                }
                x/=10; 
            }
            if(isLucky==1){
                isAlmostLucky = 1 ; 
                break;
            }

            isLucky = 1 ; 
            while(y!=0){
                if(y%10!=4 && y%10!=7){
                    isLucky = 0 ; 
                    break;
                }
                y/=10; 
            }
            if(isLucky==1){
                isAlmostLucky = 1 ; 
                break;
            }
        }
    }
    cout << (isAlmostLucky == 1 ? "YES" : "NO") ; 
    return 0 ; 
}