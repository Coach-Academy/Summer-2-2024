#include <bits/stdc++.h> 

using namespace std ; 

int main(){ 

    //solution 1
    // int n ; 
    // cin >> n ; 

    // string s ; 
    // cin >> s;  

    // for(int i=0 ; i<n ; ++i){
    //     s[i] = toupper(s[i]) ; 
    //     // s[i] = tolower(s[i]) ; 
    // }

    // sort(s.begin() , s.end()) ; 

    // int letters = 1 ;

    // for(int i=0 ; i<(int)s.size()-1 ; ++i){
    //     if(s[i] != s[i+1]){
    //         letters ++ ; 
    //     }
    // }

    // cout << (letters == 26 ? "YES" : "NO") ; 

    // solution 2
    int n ; cin >> n ;
    string s ; cin >> s ;

    int visit[26] = {0} ; 

    for(int i=0 ; i<s.size() ; ++i){
        s[i] = tolower(s[i]) ; 
        visit[s[i]-'a'] = 1 ; 
    }

    // bool isgood = true ; 
    // for(int i=0 ; i<=25 ; ++i){
    //     if(visit[i]==0){
    //         isgood = false ;
    //         break; 
    //     }
    // } 

    // cout << (isgood ? "YES" : "NO") ; 

    if(accumulate(visit,visit+26 , 0) == 26){
        cout << "YES" ; 
    }
    else{
        cout << "NO" ; 
    }
    return 0 ;
}

