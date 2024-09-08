#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int wire[N];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> wire[i];
    int m;
    cin >> m;
    while (m--) {
        int x, y;
        cin >> x >> y;
        wire[x - 1] += (y - 1);
        wire[x + 1] += (wire[x] - y);
        wire[x] = 0;
    }
    for (int i = 1; i <= n; i++)
      cout << wire[i] << endl;
    return 0;
}