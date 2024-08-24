#include <bits/stdc++.h>
#define FAST  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std ;


int main() {
    FAST;
    int tc , n; cin >> tc;
    while (tc--)
    {
        cin >> n;
        vector<int>v(n),mx(n);
        for(auto &a:v) cin >> a;
        mx[0] = v[0];
        for (int i = 1; i < n; ++i) {
            mx[i] = max(v[i] , mx[i-1]) ;
        }
        int r = n-1;
        for (int i = n -1 ; i >= 0 ; i--) {
            if(v[i] == mx[i])
            {
                for (int j = i; j <= r; ++j) {
                    cout << v[j] << " ";
                }
                r = i - 1 ;
            }
        }
        cout << "\n";
    }
    return 0;

}