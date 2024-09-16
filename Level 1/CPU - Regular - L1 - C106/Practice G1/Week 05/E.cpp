#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int res =0;
    for(char c = 'a'; c<='z';c++)
        if(s.find(c) != -1) res++;
    cout << res << '\n';
    return 0;
}