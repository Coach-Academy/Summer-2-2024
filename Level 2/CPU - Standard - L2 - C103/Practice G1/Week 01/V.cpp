//cp.exe
//g++ cp.cpp -o cp
//gcc cp.cpp -o cp.exe -lstdc++ ---how to link to standard template library
/*==============================================  KHALWSH  ==============================================*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#define int long long
#define double long double
#define line '\n'
#define khaled ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace __gnu_pbds;
using namespace std;
template<typename T>
using ordered_set=tree<T,null_type,less_equal<T>,rb_tree_tag,tree_order_statistics_node_update>;
bool valid(long long i,long long j,long long n,long long m){return i>=0&&i<n&&j>=0&&j<m;}
long long mul(long long x,long long y,const long long&mod){return ((x%mod)*(y%mod))%mod;}
long long add(long long x,long long y,const long long&mod){return (((x%mod)+(y%mod))%mod+mod)%mod;}
int SafeMul(int a,int b,int m){if(b==0)return 0;int res = SafeMul(a,b/2,m);res = add(res,res,m);if(b&1)return add(res,a,m);else return res;}
long long fast_power(long long base,long long power,const long long &m=INT64_MAX){if (power == 1 || power == 0)return base * power + (!power);long long res = (fast_power(base, power / 2, m) % m) % m;if (power & 1)return mul(base,mul(res,res,m),m);else return mul(res,res,m);}
int log2_floor(long long i) {return i ? __builtin_clzll(1) - __builtin_clzll(i) : 0;}
int power_of_2(int n){ return __builtin_popcountll(n)==1;}
bool line_checking(int a1,int b1,int a2,int b2,int a3,int b3) { return (b2-b1)*(a2-a3)==(b2-b3)*(a2-a1); }
pair<int,int> rotate(int i,int j,int n){ return make_pair(j,n-1-i); }
const int N = 1e6+5;
const int mod=1e9+7;
//const int MOD = 998244353;
const long long inf=3e18+100;
int dx[]{1,-1,0,0,1,1,-1,-1};
int dy[]{0,0,1,-1,1,-1,1,-1};
const double pi=3.14159265350979323846,eps=1e-10;
/*==============================================  KHALWSH  ==============================================*/
int g(int x){
	if(x < 10)return x;
	int prod = 1;
    int temp = x;
	while(temp > 0){
		prod *= (temp % 10 == 0 ? 1 : temp % 10);
		temp /=10;
	}
	return g(prod);
}
int pref[10][N];
signed main() {
    khaled
	for(int i=0;i<N;i++){
		pref[g(i)][i]++;
	}
	for(int i=0;i<10;i++){
		for(int j=1;j<N;j++){
			pref[i][j] += pref[i][j-1];
		}
	}
	int q;cin>>q;
	while(q--){
		int l,r,k;
		cin>>l>>r>>k;
		cout<<pref[k][r] - pref[k][l-1]<<line;
	}
}
