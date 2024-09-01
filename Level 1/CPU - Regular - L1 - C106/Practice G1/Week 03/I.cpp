#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0, level = 1;
    while (n > 0) {
        int cubes = 0;
        for (int i = 1; i <= level; i++)
            cubes += i;
        if (n >= cubes)
            ans = level;
        n -= cubes;
        level++;
    }
    cout << ans << endl;
    return 0;
}