#include <bits/stdc++.h>

using namespace std ; 

int main(){
    string s ; 
    cin >> s ; 
    cout <<  static_cast<char>(toupper(s[0])) << s.substr(1) ; 
    return 0 ; 
}