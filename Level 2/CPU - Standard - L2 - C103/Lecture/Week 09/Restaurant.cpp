#include <bits/stdc++.h>
 
using namespace std;
 
void Omar_Alaraby(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
#define dl "\n"
#define int long long
#define all(v) v.begin(), v.end()
#define INF 2000000000000000000
#define Mod 1000000007


bool comp(pair < int , int > a , pair < int , int > b) {
    if(a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}

void Solve(){
   
    int n; cin >> n;
    vector < pair < int , int > > v(n);

    for(int i=0; i<n; i++)
        cin >> v[i].first >> v[i].second;

    sort(all(v), comp);

    int last = -1, ans = 0;
    for(int i = 0 ; i < n; i++) {
        if(v[i].first > last) {
            last = v[i].second;
            ans++;
        }
    }

    cout << ans << dl;
}  

int32_t main(){
    Omar_Alaraby();
    
    int testCases = 1;
    // cin >> testCases;
    
    for(int t = 1; t<=testCases; t++){
        // cout << "set #" << t << ": " << dl;
        Solve();
    }
 
    return 0;
}