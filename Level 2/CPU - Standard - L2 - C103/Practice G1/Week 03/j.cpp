#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ll long long
using namespace std;
#define int long long
signed main(){
    FIO
    int t=1;
//    cin>>t;
    while(t--){
        int n,x; cin>>n;
        priority_queue<int,vector<int>,greater<>>q;
        int test,sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            if(sum+x>=0){
                sum+=x;
                q.push(x);
            }
            else{
                test=q.top();
                if(q.size() && sum+x-q.top()>=0 && x>q.top()){
                    sum-=q.top();
                    q.pop();
                    sum+=x;
                    q.push(x);
                }
            }
        }
        cout<<q.size()<<endl;
    }
    return 0;
}