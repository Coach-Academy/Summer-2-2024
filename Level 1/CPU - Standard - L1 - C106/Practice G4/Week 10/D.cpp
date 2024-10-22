#include<bits/stdc++.h>

using namespace std ; 

int main(){
    //                            .
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" ; 
    char d ; 
    cin >> d ; 

    string s ; 
    cin >> s ; 

    // for(auto &i : s){
    //     int idx = keyboard.find(i) ; 
    //     if(d=='R'){
    //         cout << keyboard[idx - 1] ; 
    //     }
    //     else{
    //         cout << keyboard[idx + 1] ; 
    //     }
    // }

    map<char , char> mp ; 

    for(int i=0 ; i<keyboard.size() ; ++i){
        if(d=='R'){
            if(i-1<0) continue;
            mp[keyboard[i]] = keyboard[i-1] ; 
        }
        else{
            if(i+1>=keyboard.size()) continue;
            mp[keyboard[i]] = keyboard[i+1] ; 
        }
    }

    for(auto &i : s) cout << mp[i] ; 
    return 0 ; 
}