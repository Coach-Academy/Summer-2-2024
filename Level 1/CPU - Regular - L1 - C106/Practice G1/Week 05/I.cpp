#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        string alpha = "abcdefghijklmnopqrstuvwxyz";
        sort(s.begin(), s.end());
        cout << (alpha.find(s) != -1 ? "Yes" : "No") << '\n';
    }
    return 0;
}