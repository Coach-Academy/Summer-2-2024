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

void Solve(){
   
    string s; cin >> s;

    int open_brackets = 0, close_brackets = 0;

    for(int i=0; i<(int)s.size(); i++){
        if(s[i] == '(')
            open_brackets++;
        else
            close_brackets++;

        if(close_brackets > open_brackets)
            close_brackets--;
    }

    cout << close_brackets * 2 << dl;

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