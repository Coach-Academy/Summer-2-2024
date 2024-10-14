#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int qq;
    cin >> qq;
    queue<int> q;
    while(qq--){
        int op;
        cin >> op;
        if(op == 1){
            int n;cin >> n;
            q.push(n);
        } else if ( op == 2){
            if(!q.empty())
                q.pop();
        } else {
            if(q.empty())
                cout << "Empty!" << endl;
            else
                cout << q.front() << endl;
        }
    }
    return 0;
}