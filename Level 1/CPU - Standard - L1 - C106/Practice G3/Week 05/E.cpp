#include <bits/stdc++.h>

using namespace std ; 

int main(){
    string s ; 
    getline(cin , s) ; 

    string letters ;
    for(int i=0 ; i<s.size() ; ++i){
        if(s[i]>='a' && s[i]<='z'){
            letters.push_back(s[i]) ; 
        }
    }

    sort(letters.begin() , letters.end()) ; 
    int cnt = 1; 
    for(int i=0 ; i<(int)letters.size()-1 ; ++i){ // 5481844
        // if(letters[i]!=letters[i+1]) cnt ++ ; 
        cnt += (letters[i]!=letters[i+1])  ;
    }
    
    cout << (letters.size() == 0 ? 0 : cnt) ; 
    return 0 ; 
}