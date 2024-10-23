#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        set<int> st;
        while(n--){
            int x;
            cin >> x;
            while(x--){
                int i;
                cin >> i;
                st.insert(i);
            }
        }
        cout << (st.size() == m ? "YES" : "NO") << endl;
    }
    return 0;
}