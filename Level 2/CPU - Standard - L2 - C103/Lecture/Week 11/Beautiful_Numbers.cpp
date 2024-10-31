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

const int N = 1e6, m = 1e9 + 7;
int fact[N + 1], inv[N + 1];

int mul(int a, int b, int mod) {
    ll ans = (a * 1ll * b) % mod;
    return ans;
}

int add(int a, int b, int mod) {
    int ans = (a + b) % mod;
    return ans;
}

int power(int base, int exp, int mod) {
    int ans = 1;
    while (exp) {
        if(exp & 1) ans = mul(ans, base, mod);
        base = mul(base, base, mod);
        exp /= 2;
    }
    return ans;
}

int inverse(int a, int mod) {
    return power(a, mod - 2, mod);
}

void gen(int mod) {
    fact[0] = 1;
    for (int i = 1; i <= N; ++i) {
        fact[i] = mul(fact[i - 1], i, mod);
    }

    inv[N] = inverse(fact[N], mod);
    for (int i = N - 1; i >= 0; --i) {
        inv[i] = mul(inv[i + 1], i+1, mod);
    }
}

int NcR(int N, int R, int mod) {
    return mul(mul(fact[N], inv[R], mod), inv[N-R], mod);
}

int check(int a, int b, int sum) {
    while (sum) {
        if(sum % 10 != a && sum % 10 != b)
            return 0;
        sum /= 10;
    }
    return 1;
}

int main() {
    fastIO(); fileIO();

    gen(m);

    int a, b, n; cin >> a >> b >> n;

    int ans = 0;
    for (int i = 0; i <= n; ++i) {
        int sum = a * i + (n - i) * b;
        if(check(a, b, sum)) {
            ans = add(ans, NcR(n, i, m),m);
        }
    }

    cout << ans << "\n";

    return 0;
}