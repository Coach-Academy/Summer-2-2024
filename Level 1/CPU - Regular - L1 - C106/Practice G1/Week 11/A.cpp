#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int fib(int n) {
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << fib(n) << endl;

    }
    return 0;
}