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


int main() {
    fastIO(); fileIO();

    int n, k; cin >> n >> k;
    vector<int> prime_facts;

    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            prime_facts.push_back(i);
            n /= i;
        }
    }

    if(n > 1) prime_facts.push_back(n);

    if(prime_facts.size() < k) cout << -1 << "\n";
    else {
        while (prime_facts.size() > k) {
            prime_facts[0] *= prime_facts.back();
            prime_facts.pop_back();
        }

        for(auto & p : prime_facts) cout << p << " ";
    }


    return 0;
}
