#include<bits/stdc++.h>

using namespace std ; 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t ; 
    cin >> t; 
    while(t--){
        int n , k ; 
        cin >> n >> k ;
        int a[n] , b[n] ; 

        for(int i=0 ; i<n ; ++i) cin >> a[i] ; 
        for(int i=0 ; i<n ; ++i) cin >> b[i] ; 

        sort(a , a+n) ; 
        sort(b , b+n) ; 

        int p1 = 0 , p2 = n-1 ; 
        while(k && p1<n && p2>=0){
            if(a[p1]<b[p2]){
                swap(a[p1] , b[p2]) ; 
                p1++ ; 
                p2-- ; 
                k-- ; 
            }
            else{
                break ; 
            }
        }

        int sum = 0 ; 

        for(int i =0 ; i<n ; ++i){
            sum += a[i] ; 
        }

        cout << sum << "\n"; 
    }

    return 0 ; 
}