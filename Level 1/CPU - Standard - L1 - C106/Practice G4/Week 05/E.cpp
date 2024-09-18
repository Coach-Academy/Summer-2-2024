#include <bits/stdc++.h> 

using namespace std ; 

int main(){
    // solution 1
    // string s ; 
    // getline(cin , s) ; 

    // string letters ; 

    // for(int i=0 ; i<s.size() ; ++i){
    //     if(s[i]>='a' && s[i]<='z'){
    //         letters.push_back(s[i]) ; 
    //     }
    // }

    // sort(letters.begin() , letters.end()) ; 
    
    // int cnt = 1 ; 

    // for(int i=0 ; i<(int)letters.size()-1 ; ++i){
    //     if(letters[i]!=letters[i+1]){
    //         cnt ++ ; 
    //     }
    // }


    // cout << (letters.size()==0 ? 0 : cnt); 

    // solution 2
    string s ; 
    getline(cin , s) ; 

    int visit[26] = {0} ; 

    for(int i=0 ; i<s.size() ; ++i){
        if(s[i]>='a' && s[i]<='z'){
            visit[s[i]-'a'] = 1 ; 
        }
    }

    int cnt = 0 ; 

    for(int i=0 ; i<=25 ; ++i){
        if(visit[i]==1) cnt++ ; 
    }

    cout << cnt ; 

    return 0 ;
}

