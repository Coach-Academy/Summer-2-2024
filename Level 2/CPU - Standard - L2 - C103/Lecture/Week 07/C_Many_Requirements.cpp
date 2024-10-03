#include <bits/stdc++.h>

using namespace std;
int n, m, q;
vector<vector<int>> quer;
vector<int> path;
long long score() {
    long long ret = 0;
    for (auto v : quer) {
        int a = v[0], b = v[1], c = v[2], d = v[3];
        if (path[b - 1] - path[a - 1] == c)
            ret += d;
    }
    return ret;
}

long long ans;

void rec() { // sz

    if (path.size() == n) {
        ans = max(ans, score());
        return;
    }

    int last;
    if (path.size())
        last = path.back();
    else
        last = 1;


    for (int op = last; op <= m; op++) {
        // 
        path.push_back(op);
        rec();//sz + 1
        path.pop_back();
    }
}

void solve() {
    cin >> n >> m >> q;

    for (int i = 0; i < q; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        quer.push_back({a, b, c, d});
    }

    rec();
    cout << ans << '\n';
}

int32_t main() {
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t = 1;

    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}