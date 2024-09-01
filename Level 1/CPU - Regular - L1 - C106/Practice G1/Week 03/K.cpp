#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        int temp = i;
        bool islucky = true;
        while (temp > 0) {
            if (temp % 10 != 7 && temp % 10 != 4)
                islucky = false;
            temp /= 10;
        }
        if (islucky and n % i == 0)
            flag = true;
    }
    cout << (flag ? "YES" : "NO") << '\n';
    return 0;
}