    #include "iostream"

    using namespace std;

    int main(){
        int w;
        cin >> w;
        cout << ( ( w % 2 == 0 && w > 2 ) ? "YES" : "NO" ) << '\n';
        return 0;
    }