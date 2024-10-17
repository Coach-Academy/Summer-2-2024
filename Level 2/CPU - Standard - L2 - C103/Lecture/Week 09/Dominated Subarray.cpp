#include <bits/stdc++.h>

using namespace std;
 
void Omar_Alaraby(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
#define fixed(n) fixed << setprecision(n)
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007

void Solve() {
    int n; cin >> n;
    vector < int > v(n);

    for(int i=0; i<n; i++)   // search for for each in cpp
        cin >> v[i];


    map < int , int > idx;
    int ans = INF;

    for(int i=0; i<n; i++){
        if(idx.count(v[i])) {
            ans = min(ans, i - idx[v[i]] + 1);
        }

        idx[v[i]] = i;
    }

    if(ans == INF)
        cout << -1 << dl;
    else
        cout << ans << dl;
}  

int32_t main(){
    Omar_Alaraby();
    
    int testCases = 1;
    cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}