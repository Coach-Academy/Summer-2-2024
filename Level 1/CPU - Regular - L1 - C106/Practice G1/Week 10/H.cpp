#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >>m;
        set<int> st;
        while(n--){
            int x;
            cin >>x;
            st.insert(x);
        }
        int ans = 0;
        while(m--){
            int x;
            cin >> x;
            bool flag = st.insert(x).second;
            if(flag == 0) ans++;
        }
        cout << ans << endl;
    }

    return 0;
}