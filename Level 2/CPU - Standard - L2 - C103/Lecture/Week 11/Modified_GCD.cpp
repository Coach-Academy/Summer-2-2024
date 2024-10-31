#include <bits/stdc++.h>
using namespace std;

void fileIO(void) {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

typedef long long ll;

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a/gcd(a,b)*b;
}

int main() {
    fastIO(); fileIO();

    int a, b; cin >> a >> b;
    int g = gcd(a, b);

    vector<int> divs;
    int i;
    for (i = 1; i * i < g; ++i) {
        if(g % i == 0) divs.push_back(i);
    }
    for (; i > 0; --i) {
        if(g % i == 0) divs.push_back(g/i);
    }

    int n; cin >> n;
    while (n--) {
        int l, r; cin >> l >> r;
        auto it = upper_bound(divs.begin(), divs.end(), r);
        if(it == divs.begin()) cout << "-1\n";
        else {
            --it;
            if(*it >= l)
                cout << *it << "\n";
            else
                cout << "-1\n";
        }
    }

    return 0;
}