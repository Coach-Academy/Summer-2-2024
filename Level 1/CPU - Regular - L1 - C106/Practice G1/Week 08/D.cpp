#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
    for(int i =0;i<n;i++)
        cin >> v[i];
    int ans = INT_MAX;
    for(int i = 0; i<n-1;i++)
        if(s[i] == 'R' && s[i+1] == 'L')
            ans = min(ans,(v[i+1] - v[i]) / 2);
    cout << (ans == INT_MAX ? -1 : ans) << '\n';
    return 0;
}