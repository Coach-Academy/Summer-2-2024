#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    s.front() = toupper(s.front());
    // s[0] = s[0] - 32;
    cout << s << '\n';
    return 0;
}