#include "iostream"

using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if(b == 0)
        cout << "Gold" << '\n';
    else if (a == 0)
        cout << "Silver" << '\n';
    else
        cout << "Alloy" << '\n';
    return 0;
}