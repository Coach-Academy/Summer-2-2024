#include<bits/stdc++.h>

#define ll long long
using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t ; 
    while(t--){
        int n , d ; 
        cin >> n >> d ; 
        int arr[n] ; 
        for(int i=0 ; i<n ; ++i){ // n
            cin >> arr[i] ; 
        }

        sort(arr , arr+n) ; // O(nlog(n))

        bool test = true ; 
        for(int i=0 ; i<n ; ++i){ // n
            if(arr[i]>d) test = false ; 
        } 

        if(test || arr[0]+arr[1]<=d){
            cout << "YES" ; 
        }
        else{
            cout << "NO" ; 
        }

        cout << "\n" ; 
    }

    return 0 ; 
}

// time complexity : O(n log(n))
// space complexity : O(n)

