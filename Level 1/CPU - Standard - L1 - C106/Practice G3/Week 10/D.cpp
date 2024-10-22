#include<bits/stdc++.h>

using namespace std ; 

int main(){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" ; 
    char d ; 
    cin >> d ; 
    string s; 
    cin >> s; 

    // for(auto &i : s){
    //     if(d=='L'){
    //         cout << keyboard[keyboard.find(i) + 1] ; 
    //     }
    //     else{
    //         cout << keyboard[keyboard.find(i) - 1] ; 
    //     }
    // }

    map<char , char> mp ; 
    for(int i=0 ; i<keyboard.size() ; ++i){
        if(d=='L'){
            if(i+1 >= keyboard.size()) continue;
            mp[keyboard[i]] = keyboard[i+1] ; 
        }
        else{
            if(i-1 < 0) continue;
            mp[keyboard[i]] = keyboard[i-1] ;
        }
    }


    for(auto &i : s) cout << mp[i] ;
    return 0 ; 
}