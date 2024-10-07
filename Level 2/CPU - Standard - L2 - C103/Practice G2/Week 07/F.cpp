#include <bits/stdc++.h>

using namespace std ; 
int t , n ; 
vector<int> nums ; 
vector<int> current ; 
set<vector<int>> ans ;

void rec(int idx , int sum){
    //base case
    if(sum == t){
        sort(current.rbegin() , current.rend()) ; 
        ans.insert(current) ; 
        return ; 
    }

    if(sum>t || idx>=n) return ; 
    //backtracking
    current.push_back(nums[idx]) ; // do
    rec(idx+1 , sum+nums[idx]) ; 

    current.pop_back() ; // undo
    rec(idx+1 , sum) ; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    while(cin >> t >> n){
        if(n==0) break;
        nums = vector<int>(n) ;

        for(auto &i : nums){
            cin >> i ; 
        } 

        rec(0 , 0) ; 

        cout << "Sums of " << t << ":\n" ; 

        if(ans.empty()) cout << "NONE\n" ; 
        vector<vector<int>> tmp(ans.begin() , ans.end()) ; 

        for(int k=tmp.size()-1 ; k>=0 ; --k){
            for(int i=0 ; i<tmp[k].size() ; ++i){
                cout << tmp[k][i] ; 
                if(i!=tmp[k].size()-1){
                    cout << "+" ; 
                }
            }
            cout << "\n" ; 
        }

        current = vector<int> () ;
        ans = set<vector<int>>() ; 
    }


    return 0 ; 
}