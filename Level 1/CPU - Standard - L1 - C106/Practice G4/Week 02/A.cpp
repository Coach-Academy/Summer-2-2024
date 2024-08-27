#include <bits/stdc++.h>

using namespace std ; 

int main(){
    char c ; cin >> c ; 

    bool isVowel = (c=='a' || c=='e' || c=='u' || c=='o' || c=='i') ; 

    cout << (isVowel ? "vowel" : "consonant") ; 
}