#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        map<string, bool> mp;
        vector<string> v(n);
        for (auto &i: v) cin >> i;
        reverse(v.begin(), v.end());
        for (auto i: v) {
            if (mp[i])
                continue;
            cout << i << endl;
            mp[i] = true;
        }
    }
    return 0;
}