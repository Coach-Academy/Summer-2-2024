#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s, t;
        cin >> s >> t;
        bool flag = false;
        string right;
        for (int i = 0; i < (int) s.size(); i++) {
            string left = right;
            reverse(left.begin(), left.end());
            right += s[i];
            string res = right + left;
            if (res.find(t) != -1)
                flag = true;
        }
        cout << (flag ? "YES" : "NO") << '\n';
    }
    return 0;
}