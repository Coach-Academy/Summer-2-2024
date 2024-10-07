#include <bits/stdc++.h>

using namespace std ; 

vector<long long> luckys ; 


void generateLuckyNumbers(long long curr , long long &r){
    //base case
    if(curr!=0) luckys.push_back(curr) ; 

    if(curr>r){
        return ; 
    }

    // recursive calls
    generateLuckyNumbers(curr*10 + 4 , r) ; 
    generateLuckyNumbers(curr*10 + 7 , r) ; 
}


int main(){
    long long l , r ; 
    cin >> l >> r ;
    generateLuckyNumbers(0 , r) ; 
    sort(luckys.begin() , luckys.end()) ; 
    long long ans = 0 ; 

    while(l<=r){
        long long next = *lower_bound(luckys.begin() , luckys.end() , l) ;
        ans += ((min(next , r*1LL) - l + 1) * next) ; 
        l = next + 1 ; 
    } 

    cout << ans ; 
    return 0 ; 
}