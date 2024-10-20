#include<bits/stdc++.h>

using namespace std ;

int main(){
    char dir ; 
    cin >> dir ; 
    string s ; 
    cin >> s ; 
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./" ; 
    map<char,char> mp ; 

    for(int i=0 ; i<keyboard.size() ; ++i){
        if(dir=='L'){
            if(i+1>=keyboard.size()){
                continue;
            }
            mp[keyboard[i]] = keyboard[i+1] ; 
        }
        else{
            if(i-1<0){
                continue;
            }
            mp[keyboard[i]] = keyboard[i-1] ;
        }
    }

    for(auto &i : s){
        cout << mp[i] ; 
    }
    return 0 ; 
}