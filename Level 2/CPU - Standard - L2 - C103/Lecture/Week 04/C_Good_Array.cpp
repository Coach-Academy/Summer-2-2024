#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

const int N = 1e6 + 5;
int fq[N];

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        sum += a[i];
        fq[a[i]]++;
    }

    vector<int> ans;
    for (int i = 0; i < n; i++) {
        // a4el
        sum -= a[i];
        fq[a[i]]--;

        // a4of ana good wla la
        if (sum % 2 == 0 && sum / 2 < N && fq[sum / 2]) {
            ans.push_back(i);
        }
        // arg3 el element
        sum += a[i];
        fq[a[i]]++;
    }

    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i + 1 << ' ';
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