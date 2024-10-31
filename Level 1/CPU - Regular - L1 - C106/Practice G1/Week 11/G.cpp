#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

bool solve(int i, string &s) {
    if (i == s.size())
        return true;
    bool res = ((i % 2 and isupper(s[i])) || (i % 2 == 0 and islower(s[i])));
    if (res)
        res &= solve(i + 1, s);
    else
        return false;
    return res;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << ((solve(0, s)) ? "Yes" : "No") << endl;
    }
    return 0;
}